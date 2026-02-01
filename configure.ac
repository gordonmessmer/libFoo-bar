AC_INIT([Bar], [1.0], [support@example.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AC_CONFIG_HEADERS([config.h])

# Check for libFoo
AC_CHECK_LIB([Foo], [rectangle_perimeter], [],
    [AC_MSG_ERROR([libFoo is required but not found])])

# Check for rectangle_area function (available in libFoo 1.1+)
AC_CHECK_LIB([Foo], [rectangle_area],
    [AC_DEFINE([HAVE_RECTANGLE_AREA], [1],
        [Define to 1 if libFoo has rectangle_area function])])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
