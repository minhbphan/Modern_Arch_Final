#define COW_CRASH_ON_FLOATING_POINT_EXCEPTIONS
#define _CRT_SECURE_NO_WARNINGS
#include "snail.cpp"
#include "cow.cpp"
#include "_stretchy_buffer.cpp" // bare-bones templatized stretchy buffer
#include <set>

void modern_arch_final()
{
    init();
    Camera3D camera = {10, RAD(45)};
    double t = 0;
    // bool playing = false;
    while (begin_frame())
    {
        camera_move(&camera);
        mat4 P = camera_get_P(&camera);
        mat4 V = camera_get_V(&camera);

        mat4 S = Scaling(1.25 - .25 * cos(5 * t), .722 + .278 * cos(5 * t), 1.25 - .25 * cos(5 * t));
        basic_draw(P * V, meshlib.basic_axes);

        // body
        fancy_draw(P, V, S * Translation(0, 9, 0) * Scaling(4, 9, 4), meshlib.fancy_box, monokai.brown);

        // top ledge
        fancy_draw(P, V, S * Translation(0, 17.8, 0) * Scaling(4.5, .5, 4.5), meshlib.fancy_box, monokai.wainwright);

        // windows
        for (int i = 0; i < 8; i++)
        {
            double y_disp = -1.8 * i;
            for (int j = 0; j < 12; j++)
            {
                double x_disp = .65 * j;
                fancy_draw(P, V, S * Translation(-3.55 + x_disp, 16 + y_disp, 0) * Scaling(.25, .45, 4.1), meshlib.fancy_box, monokai.black);
                fancy_draw(P, V, S * Translation(0, 16 + y_disp, -3.55 + x_disp) * Scaling(4.1, .45, .25), meshlib.fancy_box, monokai.black);
            }
        }

        // bottom ledge
        fancy_draw(P, V, S * Translation(0, 4.05, 0) * Scaling(4.2, .15, 4.2), meshlib.fancy_box, monokai.wainwright);

        // bottom windows
        for (int i = 0; i < 3; i++)
        {
            double init_x = 3.8 - (i * 1.05);
            for (int j = 0; j < 3; j++)
            {
                double x_disp = .3 * j;
                fancy_draw(P, V, S * Translation(-init_x + x_disp, 1.58, 0) * Scaling(0.12, .15, 4.1), meshlib.fancy_box, monokai.black);
                fancy_draw(P, V, S * Translation(init_x - x_disp, 1.58, 0) * Scaling(0.12, .15, 4.1), meshlib.fancy_box, monokai.black);
            }
        }

        // bottom doors
        for (int i = 0; i < 3; i++)
        {
            double x_disp = 1.05 * i;
            fancy_draw(P, V, S * Translation(-3.5 + x_disp, .7, 0) * Scaling(0.45, .7, 4.1), meshlib.fancy_box, monokai.black);
            fancy_draw(P, V, S * Translation(3.5 - x_disp, .7, 0) * Scaling(0.45, .7, 4.1), meshlib.fancy_box, monokai.black);
        }

        // main door
        fancy_draw(P, V, S * Translation(0, .9, 0) * Scaling(0.7, .9, 4.1), meshlib.fancy_box, monokai.black);

        { // floor
            gl_PV(P * V);
            gl_begin(QUADS);
            gl_color(1, 1, 1, .5);
            gl_vertex(10, 0, 10);
            gl_vertex(-10, 0, 10);
            gl_vertex(-10, 0, -10);
            gl_vertex(10, 0, -10);
            gl_end();
        }
    }
}

int main()
{
    init(false, "", 360, 0, 100);
    modern_arch_final();
    return 0;
}
