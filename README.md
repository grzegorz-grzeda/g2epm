# g2epm
Greg's embedded project manager

This is a simple project manager for CMake C projects. It gets the job done.

## How to use it
Each project has to have a `project.json` in it with a basic structure:
```json
{
    "name":"<project name>",
    "libraries":[
        "<list of libraries>"
    ]
}
```
The `libraries` will be cloned from external `git` repositories into a `lib` subdirectory. Also a all-gathering
`CMakeLists.txt` file will be generated, so you only have to `add_subdirectory(lib)` in your root `CMakeLists.txt` file.

To download the libraries, enter: `g2epm download`.

## Libraries discovery
The libraries have three options to be named:
- `name` only
- `github-username/repo-name`
- full path to git repository

The first option will make `g2epm` to seek for the library in the [official G2EPM repository](https://github.com/grzegorz-grzeda/g2epm-repository).

The second option will clone a library from a specified repository, from a `github` user.

The third option will download a library from a specified repository path.

## Copyright
This library was written by G2Labs Grzegorz Grzęda, and is distributed under MIT Licence. Check the LICENSE file for more details.