#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QT_CLIB_LIB)
#  define QT_CLIB_EXPORT Q_DECL_EXPORT
# else
#  define QT_CLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define QT_CLIB_EXPORT
#endif
