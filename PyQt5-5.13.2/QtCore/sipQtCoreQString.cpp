/*
 * Interface wrapper code.
 *
 * Generated by SIP 5.3.0
 *
 * Copyright (c) 2019 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQString.cpp"



extern "C" {static void assign_QString(void *, Py_ssize_t, void *);}
static void assign_QString(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QString *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QString *>(sipSrc);
}


extern "C" {static void *array_QString(Py_ssize_t);}
static void *array_QString(Py_ssize_t sipNrElem)
{
    return new  ::QString[sipNrElem];
}


extern "C" {static void *copy_QString(const void *, Py_ssize_t);}
static void *copy_QString(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QString(reinterpret_cast<const  ::QString *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QString(void *, int);}
static void release_QString(void *ptr, int)
{
    delete reinterpret_cast< ::QString *>(ptr);
}



extern "C" {static int convertTo_QString(PyObject *, void **, int *, PyObject *);}
static int convertTo_QString(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QString **sipCppPtr = reinterpret_cast< ::QString **>(sipCppPtrV);

#line 31 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
if (sipIsErr == NULL)
#if PY_MAJOR_VERSION < 3
    return (sipPy == Py_None || PyString_Check(sipPy) || PyUnicode_Check(sipPy));
#else
    return (sipPy == Py_None || PyUnicode_Check(sipPy));
#endif

if (sipPy == Py_None)
{
    // None is the only way to create a null (as opposed to empty) QString.
    *sipCppPtr = new QString();

    return sipGetState(sipTransferObj);
}

*sipCppPtr = new QString(qpycore_PyObject_AsQString(sipPy));

return sipGetState(sipTransferObj);
#line 87 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQString.cpp"
}


extern "C" {static PyObject *convertFrom_QString(void *, PyObject *);}
static PyObject *convertFrom_QString(void *sipCppV, PyObject *)
{
    ::QString *sipCpp = reinterpret_cast< ::QString *>(sipCppV);

#line 52 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
    return qpycore_PyObject_FromQString(*sipCpp);
#line 98 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQString.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QString = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_ALLOW_NONE|SIP_TYPE_MAPPED,
        sipNameNr_QString,     /* QString */
        SIP_NULLPTR,
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QString,
    array_QString,
    copy_QString,
    release_QString,
    convertTo_QString,
    convertFrom_QString
};