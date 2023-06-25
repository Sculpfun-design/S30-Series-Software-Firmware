### Using It


# Installation of VSCode & PlatformIO
## 1. Git
The Grbl_ESP32 project uses the [Git](https://en.wikipedia.org/wiki/Git) version control systems to track changes to the code, in conjunction with the GitHub web service for storing code in the cloud.  Using git is not strictly necessary - you could just download a .zip file with a given version of the source code - but git has many advantages.  You can easily track different versions of the code, switch back and forth between released and experimental code, send proposed changes back to the core developers, etc.

If you already have git on your machine, VSCode will use the existing installation.  If not, first [install git](https://git-scm.com/download) .  More information about Git can be found at [Git documentation](https://git-scm.com/doc).

## 2. VSCode
Install [Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide) by following the [documentation](https://docs.platformio.org/en/latest/integration/ide/vscode.html). A fresh installation of VSCode, here in Windows, looks like this.</p>
<img src="https://github.com/bdring/Grbl_Esp32/wiki/images/VSCode.png" width="75%">

## 3. PlatformIO extension
Open the VSCode extensions tab by clicking the "gear" icon at the bottom left corner and choosing Extensions.  In the "Search Extension in Marketplace" box at the top, type "platformio", choose the "PlatformIO IDE" extension, then install it with the blue "Install" button.

<img src="https://github.com/bdring/Grbl_Esp32/wiki/images/PlatformIO.png" width="75%">

## 4. GitLens extension (optional)
The **GitLens** extension offers code comparison and the whole functionality of git for VSCode. This is particularly useful for developers who need to look in detail at how the code has changed over time.  Search for "GitLens" in the Extensions manager, as above, and install it. See picture below.

## 5. C/C++ extension
Most of the Grbl_Esp32 source code is written in C/C++.  There are various different extensions to help with C/C++ development - highlighting keywords, on-the-fly error checking, showing function arguments, etc.  The **C/C++** extension from Microsoft works well. See picture below.

## 6. Final overview of installed extensions

<img src="https://github.com/bdring/Grbl_Esp32/wiki/images/OtherExtensions.png" width="75%">

At this point, the installation is finished.  The next step is project setup.

# Importing Grbl_Esp32 into VSCode/PlatformIO

The Grbl_Esp32 source code contains a "platformio.ini" file that tells PlatformIO how to compile it.

If you already have the Grbl_Esp32 source code on your computer, just go to File>Open Folder from the top menu bar, and select the folder with Grbl_Esp32.  The presence of "platformio.ini" in that folder will activate the PlatformIO extension.

If you do not already have the source code, you can get it directly from within VSCode.  In the VSCode sidebar, click on the "alien" icon for PlatformIO to bring up the "PLATFORMIO: QUICK ACCESS" panel, then select Clone Git Project.

<img src="https://github.com/bdring/Grbl_Esp32/wiki/images/PIO_Git_Clone.png" width="50%">

At the top, you will then see a box that says "Provide repository URL or pick a repository source".  Paste https://github.com/Sculpfun-design/S30-Series-Software-Firmware.git in that box and click on the Clone from URL ... line that appears below it. 

![CloneURL](https://github.com/Sculpfun-design/S30-Series-Software-Firmware/assets/135011582/4743d495-94e3-44be-a883-aad1c24f1f37)

That will bring up a file selector dialog where you can choose the directory that will contain the new "Grbl_Esp32" subdirectory.  Then you will see

![CloneProgress](https://github.com/Sculpfun-design/S30-Series-Software-Firmware/assets/135011582/20c5349b-13a3-4097-a2c2-3a6ca554ca04)

then

![OpenRepository](https://github.com/Sculpfun-design/S30-Series-Software-Firmware/assets/135011582/06c39ebc-1a59-4c76-adf4-9a686302929b)

Click Open and VSCode will connect to the Grbl_Esp32 source code.

# How to compile Grbl_Esp32

The VSCode PlatformIO extension adds some icons to the status bar at the bottom of the window

<img src="https://github.com/bdring/Grbl_Esp32/wiki/images/PlatformIOIcons.png" width="75%">

You can hover the mouse over an icon to verify what it does.

The "check mark" icon compiles ("builds") the firmware from source but does not upload it to the ESP32 module.  The compilation process, with any resulting errors, is shown in a VSCode "TERMINAL" pane.

The "right arrow" icon compiles and then, if successful, uploads to the ESP32 module.  This is the one that you will use most frequently.

<img src="https://github.com/bdring/Grbl_Esp32/wiki/images/PlatformIO-Build.png" width="75%">

The "trash can" icon perform a "clean" step.  In most cases, PlatformIO can detect when a source file has changed, and will only recompile the changed files, thus speeding up the process for subsequent recompiles after you make small changes.  In a few situations - particularly when you make changes in the Custom/ folder - the change detection does not work, so you have to force PlatformIO to recompile everything.  That is what "clean" is for - it discards all of the previous compilation results so the compilation process starts from a clean slate and compiles everything.

The "power plug" icon starts a serial monitor that connects to the ESP32 serial port, so you can interact with Grbl_Esp32 serially.

The normal process is "Upload" (which does the compile step automatically), then "Serial Monitor".

## Possible Problems

* If you have an existing PlatformIO installation from earlier work you have done, there is a chance
that the old installation might interfere with the new work.  PlatformIO stores a lot of tools in
the directory _UserHomeDirectory_/.platformio .  (On Windows, _UserHomeDirectory_ is usually
"C:/Users/YourUserName"). Old versions of those tools might not work properly.
In that case, you can try deleting or renaming that old .platformio directory.  Then you will have
to use VSCode's Extension Manager to Uninstall then (re) Install the PlatformIO extension.  You might
be prompted to reload VSCode a couple of times; ask the internet for how to do that.

