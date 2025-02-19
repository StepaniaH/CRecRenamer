
# CRecRenamer
This project aims to create an **efficient and customizable recursive file renaming tool** written in C. The goal is to provide a tool that allows users to recursively rename files in a directory (and its subdirectories) according to custom rules, catering to personal use cases. The tool is designed to be lightweight, fast, and flexible, while offering full control over the renaming process.

## Current Features

- **Rename a single file**: The tool can rename a single file by accepting user input for the original and new filenames.
- **Basic error handling**: If renaming fails (e.g., due to permission issues or a non-existent file), an error message will be displayed.

## TODO

- **Recursive directory traversal**: Extend the tool to traverse directories and subdirectories, renaming files based on specified rules.
- **Custom renaming rules**: Implement various renaming options like adding prefixes, suffixes, changing file extensions, etc.
- **Conflict resolution**: Handle file name conflicts by appending numbers or altering the name automatically.
- **Filtering options**: Allow users to specify file types or extensions for renaming (e.g., only `.txt` files).
- **Logging**: Create logs to track renaming operations, including success and failure cases.
- **Simulate mode**: Add a "dry run" mode to show the files that will be renamed without actually making changes.
- **Optional Backup Before Renaming**: Create a copy of the original folder before renaming. This backup will preserve the state of the folder before any renaming is done, allowing the user to recover the original files if needed.

## Other Notes

- This project is a work in progress.
- If you have any suggestions or improvements, feel free to open an issue or contribute to the project!

