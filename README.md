## note from Minh
Welcome! This is probably pretty unconventional for an ARTH final, right? Well, I thought I would throw in some **liberal arts magic** and made the Wainwright Building (Sullivan, 1891) using the (modified) OpenGL library. It's a little rough right now, but for the scope of the exam (and not staying up another 3 hours or so debugging), here's the codebase for the project :)

The following is from James Bern's CS 371 repository and is a great guide if (for some reason) you would like to run the project locally on your machine.

## quick start guide
 
#### build and run
- **open a terminal:** `CTRL + Alt + T`
- **(optional; breaks `Ctrl + V` binding for Vim) change Terminal's paste shortcut from `Ctrl + Shift + V` to `Ctrl + V`:** Terminal -> Preferences -> Shortcuts -> Edit -> Paste -> `CTRL + V`
- **navigate to Desktop:** `cd Desktop`
- **clone codebase:** `git clone https://github.com/james-bern/CSCI-371.git`
- **navigate into repo:** `cd CSCI-371`
- **build and run / debug:** `source ubuntu_build_and_run.sh --help`
#### debug
- **_install CodeLLDB when prompted_**
- **(optional but recommended) install C/C++ extension:** https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools
#### misc
- **make a file executable (runnable as `./foo.bar`):** `chmod +x foo.bar`
- **open file explorer:** `nautilus .`
- **show hidden folders in file explorer:** `Ctrl + H`
- **panic in terminal:** `Ctrl + C`
- **unfreeze the terminal (frozen by Ctrl + S):** `Ctrl + Q`
</details>

<details>
  <summary>🍏 on your macbook</summary>

#### build and run
- **open terminal:** `⌘ + Space`; type `Terminal`; press `Enter`
- **(optional but recommended) old-style fullscreen Terminal:** hold `option`; click green circle
- **navigate to Desktop:** `cd Desktop`
- **install Xcode if you don't have it already:** https://apps.apple.com/us/app/xcode/id497799835?mt=12
- **clone codebase:** `git clone https://github.com/james-bern/CSCI-371.git`
  - **_if prompted, install developer tools and then repeat this step_**
- **navigate into repo:** `cd CSCI-371`
- **build and run / debug:** `source mac_build_and_run.sh --help`
#### debug
- **debug with VS Code:**
  - **install and configure VS Code**
    - **follow steps for 'Installation':** https://code.visualstudio.com/docs/setup/mac
    - **follow steps for 'Launching from the command line':** https://code.visualstudio.com/docs/setup/mac#_launching-from-the-command-line
  - **_install CodeLLDB when prompted_**
  - **(optional but recommended) install C/C++ extension:** https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools
- **❗ _if you randomly start having problems, you may need to shell uninstall and then shell install again_ (see 'Launching from the command line')**
#### misc
- **(recommended) set refresh rate to 60 Hertz**
  - **open System Preferences:** `⌘ + Space`; type `System Preferences`; press `Enter`
  - **click Displays**
  - Refresh Rate -> 60 Hertz
- **make a file executable (runnable as `./foo.bar`):** `chmod +x foo.bar`
- **open finder:** `open .`
- **show hidden folders in finder:** `⌘ + Shift + .`
- **show all file extensions in finder:** Finder -> Preferences... -> Advanced -> Show all filename extensions
</details>

<details>
  <summary>🤷‍♂️ on your windows 10 computer (note: windows 11 may have multiple issues--e.g. Desktop may be located inside of OneDrive--see me in person and we'll make it work)</summary>

#### build and run
- **install git if you don't have it**
  - **install standalone (use all default options):** https://git-scm.com/download/win
- **install C++ build tools if you don't have them (any year should work)**
  - **option a (recommended) -- install standalone (:warning: you will need to scroll down; be careful you install the right thing):** https://visualstudio.microsoft.com/downloads/?q=build+tools
  - **option b -- install Visual Studio Community Edition:** https://visualstudio.microsoft.com/downloads/
- **open a x64 Native Tools Command Prompt:** press `⊞ Win`; type `x64`; press `Enter`
- **navigate to Desktop:** `cd "C:\Users\YOUR_USER_NAME\Desktop"`
- **clone codebase:** `git clone https://github.com/james-bern/CSCI-371.git`
- **navigate into repo:** `cd CSCI-371`
- **build and run / debug:** `windows_build_and_run.bat --help`
- **(optional but recommended) create a shortcut for the x64 Native Tools Command Prompt that starts in repo**
  - **bring up x64 Native Tools Command Prompt in start menu:** press `⊞ Win`; type `x64`
  - **bring up shortcut in file explorer:** click Open file location
  - **create a Desktop shortcut:** holding control, click and drag highlighted shortcut to your Desktop
  - **customize shortcut:**
    - right click Desktop shortcut -> change Start in field to `"C:\Users\YOUR_USER_NAME\Desktop\CSCI-371"`
    - go to General tab -> change name (no-name field) to `CSCI-371` (or whatever you would like)

#### debug
- **option a (so much better) -- debug with RemedyBG (vroom vroom)**
  - purchase here (if cost is an issue, just let me know) https://remedybg.itch.io/remedybg
  - place remedybg.exe in CSCI-371 directory
- **option b (maybe easier at first, but trust me it's not worth it) -- debug with Visual Studio Code**
  - **install VS Code if you don't have it:** https://code.visualstudio.com/download
#### misc
- **open file explorer:** start .
- **show hidden files:** press `⊞ Win`; type Show hidden files; File Explorer Options -> Show hidden files... (also a good time to make sure Hide extensions for known file types is unchecked)
</details>



## more details
<details>
  <summary>🐛 debugging</summary>

#### basic usage
- click to the left of a line number (red circle should appear) to toggle a breakpoint
#### troubleshooting
- **known issue -- pause button doesn't work at first in VS Code**
  - workaround: use a programmatic breakpoint `xplat_run_to_line();`
  - workaround: hit a manual breakpoint and resume, then pause should work
</details>


