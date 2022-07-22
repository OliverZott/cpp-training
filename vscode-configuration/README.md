# VS Code configurations

Some remarks how to configure and use Visual Studio Code with C++.

## Prerequisites

For Linux check if gdb and g++ is installed and install if necessary:

- `gcc -v`
- `gdb -v`
- `sudo apt-get install build-essential gdb`

---

## tasks.json

For compiler build settings.

- Press the play button in the top right corner of the editor.
- Choose g++ build and debug active file from the list of detected compilers on your system.

## launch.json

For debugger settings.

- Command Palette (Ctrl + Shift + P) or (F1) -> Add Debug Configuration
  - `g++ build and debug active file`

## c_cpp_properties.json

For compiler path and IntelliSense settings (for more control over the C/C++ extension).

- Command Palette (Ctrl + Shift + P) or (F1) -> C/C++: Edit Configurations (UI)
- Creates json file

## settings.json

Modified setting values are stored in a settings.json file.

- Command Palette (Ctrl + Shift + P) or (F1) -> Preferences: Open Settings (JSON)
- [global - folder - workspace](https://supunkavinda.blog/vscode-editing-settings-json)
- [docs](https://code.visualstudio.com/docs/getstarted/settings)

---

## Resources

- [Linux config](https://code.visualstudio.com/docs/cpp/config-linux)
- [Debugging](https://code.visualstudio.com/docs/cpp/cpp-debug)
- [Configure debugging](https://code.visualstudio.com/docs/cpp/launch-json-reference)

### Docs

- [tasks.json](https://code.visualstudio.com/docs/editor/variables-reference)
