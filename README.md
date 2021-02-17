# Modern CMake Template for C language project and unit tests

This project demonstrates how to implement unit test framework and handle
target level dependencies properly. Simple application is built using libfoo and
libbar. The interfaces for the said libraries are defined in foo.h and bar.h.
Both libraries do have some internal functionality that is hidden inside
the library.

Components:

- `app`.
- `app\tests`.
- `libs/foo`.
- `libs/foo/tests`.
- `libs/bar`.
- `libs/bar/tests`.

## Usage

run make at the root. See contents for the targets.


