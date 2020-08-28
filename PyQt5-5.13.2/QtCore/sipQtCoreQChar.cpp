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

#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qchar.sip"
#include <qchar.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQChar.cpp"



extern "C" {static void assign_QChar(void *, Py_ssize_t, void *);}
static void assign_QChar(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QChar *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QChar *>(sipSrc);
}


extern "C" {static void *array_QChar(Py_ssize_t);}
static void *array_QChar(Py_ssize_t sipNrElem)
{
    return new  ::QChar[sipNrElem];
}


extern "C" {static void *copy_QChar(const void *, Py_ssize_t);}
static void *copy_QChar(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QChar(reinterpret_cast<const  ::QChar *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QChar(void *, int);}
static void release_QChar(void *ptr, int)
{
    delete reinterpret_cast< ::QChar *>(ptr);
}



extern "C" {static int convertTo_QChar(PyObject *, void **, int *, PyObject *);}
static int convertTo_QChar(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QChar **sipCppPtr = reinterpret_cast< ::QChar **>(sipCppPtrV);

#line 31 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qchar.sip"
if (sipIsErr == NULL)
#if PY_MAJOR_VERSION < 3
    return (PyString_Check(sipPy) || PyUnicode_Check(sipPy));
#else
    return PyUnicode_Check(sipPy);
#endif

QString qs = qpycore_PyObject_AsQString(sipPy);

if (qs.size() != 1)
{
    PyErr_SetString(PyExc_ValueError, "string of length 1 expected");
    *sipIsErr = 1;
    return 0;
}

*sipCppPtr = new QChar(qs.at(0));

return sipGetState(sipTransferObj);
#line 88 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQChar.cpp"
}


extern "C" {static PyObject *convertFrom_QChar(void *, PyObject *);}
static PyObject *convertFrom_QChar(void *sipCppV, PyObject *)
{
    ::QChar *sipCpp = reinterpret_cast< ::QChar *>(sipCppV);

#line 53 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qchar.sip"
    return qpycore_PyObject_FromQString(QString(*sipCpp));
#line 99 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQChar.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QChar = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QChar,     /* QChar */
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
    assign_QChar,
    array_QChar,
    copy_QChar,
    release_QChar,
    convertTo_QChar,
    convertFrom_QChar
};
