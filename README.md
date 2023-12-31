# Purpose
This is a fork of a nice little hex editor that includes some other useful functionality.

I needed a hex editor (preferred with a UI) to use on my Raspberry Pi400 for some other projects.

Found this and managed to get it to compile and run without any issues on a Pi400 with a 64-bit OS.

From here I plan to review outstanding TODOs and issues in the project, and will likely start trimming out
the builds for other OSes, and make this just work for Pis both 64 and 32-bit.

Hopefully someone else will find it useful. All credit goes to the original author.

*First Pi (ARM) specific optimization - the original fork has some SSE2 (SIMD) implementations for text/string searches. On large files, this presented a large speed increase where processors supported SSE2. I initially implemented some changes for this to work with NEON SIMD for the ARM. While working through that, I discovered https://github.com/simd-everywhere/simde - SIMD-everywhere. This is a really interesting project that allowed for an extremely easy implementation of not only NEON, but should allow for portability to other SIMD instructions as well. I made no initial optimizations, and it "just works"*

# wxHexEditor
(Original Author)
wxHexEditor official GIT repo
For info : http://www.wxhexeditor.org

# Pre-requisites
- wxgtk;

On raspbian, install wxgtk libraries with:
`sudo apt install libwxgtk3.0-gtk3-dev`

- simd-everywhere
On raspbian, install simde with:
`sudo apt install libsimde-dev`

*The most recent commit (12/30/2023) was built against wxWidgets v3.2.4 which was built from source https://wiki.wxwidgets.org/Compiling_and_getting_started*


# Compilation instructions
Clone, cd to the directory and run `make`

Optionally after make completes, run `sudo make install` to add it to the Pi OS Applications menu (in Accessories)

# Confirmed Working on Pi400

*I've since moved on to a Pi5 running Rasbian Bookworm - compiles and works without issue.*

Compiles without issue on a Raspberry Pi400 running 64-bit Raspbian Bullseye (11):

```
$ cat /etc/os-release 
PRETTY_NAME="Debian GNU/Linux 11 (bullseye)"
NAME="Debian GNU/Linux"
VERSION_ID="11"
VERSION="11 (bullseye)"
VERSION_CODENAME=bullseye
ID=debian
HOME_URL="https://www.debian.org/"
SUPPORT_URL="https://www.debian.org/support"
BUG_REPORT_URL="https://bugs.debian.org/"
```

```
$ dpkg --print-architecture
arm64
```
