AC_PREREQ([2.69])
AC_INIT([JLR Hello], [0.1], [clambers@jaguarlandrover.com], [hello])
AC_CONFIG_SRCDIR([hello/hello.cc])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile hello/Makefile])
AM_INIT_AUTOMAKE([1.15 foreign tar-ustar dist-xz no-dist-gzip -Wall -Werror -Wno-portability])
AM_SILENT_RULES([yes])
AC_PROG_CC
AC_PROG_CXX
AC_PROG_SED
AM_PATH_GLIB_2_0([2.38.0], [], [AC_MSG_ERROR([no glib found])], [gobject gio])
PKG_CHECK_MODULES([QT], [Qt5Core Qt5Widgets Qt5Quick])
AC_CHECK_PROGS([MOC], [moc-qt5 moc])
AC_CHECK_PROGS([UIC], [uic-qt5 uic])
AC_CHECK_PROGS([RCC], [rcc-qt5 rcc])
AC_OUTPUT
