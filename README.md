# netbsd-gpu-off

This NetBSD module disables a laptop discrete card (e.g. NVIDIA Optimus graphic cards) via ACPI call. This module
was inspired by
[this](https://mail-index.netbsd.org/netbsd-users/2012/05/30/msg010741.html)
thread and [this](https://github.com/ahacking/freebsd-gpu-off) script.

## Installation

1. Make a directory "src/sys/modules/nvidia". Create a Makefile there with:
```sh
    .include "../Makefile.inc"

    .PATH: ${S}/dev/acpi

    KMOD= nvidia
    SRCS= nvidia.c

    WARNS= 4
    .include <bsd.kmodule.mk>
```

2. Edit file "src/sys/dev/acpi/files.acpi" and put the following there:

```sh
    device nvidia
    file   dev/acpi/nvidia.c     acpi
```

3. Drop nvidia.c to "src/sys/dev/acpi".
4. Build within the module directory and load the created .kmod.
