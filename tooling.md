# 🛠️ C++ Tooling

To build C++ projects, you need a compiler (and optionally CMake). Here's how to set up your environment based on your operating system!

## Windows
1. Compiler: Download the Build Tools for Visual Studio 2022.
    * Scroll down to "All Downloads" > "Tools for Visual Studio."
    * During installation, check the box for "Desktop development with C++". This installs the cl.exe compiler.
2. CMake: Download the "Windows x64 Installer" from cmake.org.
    * CRITICAL: During installation, select "Add CMake to the system PATH for all users."
3. After installation, run your commands in "Developer PowerShell for VS 2022" to ensure your tooling is available.

## macOS
1. Compiler: Open your Terminal and run:
    ```bash
    xcode-select --install
    ```
    Click "Install" on the popup to get the Command Line Tools (Clang).

2. CMake: Download the macOS Binary Distribution (.dmg) from cmake.org.
    * Open the .dmg and drag CMake to your Applications folder.
    * Open the CMake app, and in the menu bar, go to Tools > Install For Command Line Use.

## Debian-based (Ubuntu/Mint/Pop!_OS/Kali) Linux
1. Run this command in your terminal:
    ```bash
    sudo apt update && sudo apt install build-essential cmake
    ```

## Fedora-based (Fedora/RHEL/CentOS) Linux
1. Run this command in your terminal:
    ```bash
    sudo dnf groupinstall "Development Tools" && sudo dnf install cmake
    ```

## Arch-based (Arch Linux/Manjaro) Linux
1. Run this command in your terminal:
    ```bash
    sudo pacman -Syu base-devel cmake
    ```
    NOTE: Because Arch is rolling release, this may update other packages. If you want to avoid that, you can just install the specific packages:
    ```bash
    sudo pacman -S base-devel cmake
    ```


## Verification
Restart your terminal and run these to make sure you're ready:
    ```bash
    cmake --version
    ```
    Mac/Linux:
    ```bash
    g++ --version or clang --version
    ```
    Windows (inside the Developer PowerShell):
    ```bash
    cl --version
    ```

## Build Workflow

Once your tools are installed, navigate to your project folder and remember these commands:
* Configure: cmake -B build
* Build: cmake --build build
* Run:
    * Windows: ./build/Debug/your_program.exe
    * Mac/Linux: ./build/your_program