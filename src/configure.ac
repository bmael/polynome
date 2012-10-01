#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([Polynome], [2.0], [maelbar44@gmail.com])
AC_CONFIG_SRCDIR([array.cpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP

# Check arguments
AC_ARG_WITH(float,[--with-float],
		float=${with_float},float=no)
	if test $float = yes; then
		CFLAGS=" $CFLAGS -D MFloat"
	else
		CFLAGS=" $CFLAGS -D MDouble"
	fi

AC_ARG_WITH(array,[--with-array],
		array=${with_array},array=no)
	if test $array = yes; then
		CFLAGS=" $CFLAGS -D MArray"
		COEFF="array"
	else
		CFLAGS=" $CFLAGS -D MList"
		COEFF="linkedlist"
	fi

# Verification for function pow
####### TODO #######
AC_MSG_CHECKING(whether we are using a buggy GNU libc pow() )
AC_TRY_RUN([double pow(double,int);int main(){exit(pow(0,0) == 1);}], buggy_pow=yes, buggy_pow=no,:)
AC_MSG_RESULT(${buggy_pow})
if test $buggy_pow=no;then
	AC_DEFINE(pow,monpow,[Define this to monpow if pow is buggy])
fi





# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.


# Substitution of variables
AC_SUBST(COEFF)

# Checks for library functions.
AC_CHECK_FUNCS([pow])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
