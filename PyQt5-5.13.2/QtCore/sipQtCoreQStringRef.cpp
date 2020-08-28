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

#line 59 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQStringRef.cpp"



extern "C" {static void assign_QStringRef(void *, Py_ssize_t, void *);}
static void assign_QStringRef(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStringRef *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStringRef *>(sipSrc);
}


extern "C" {static void *array_QStringRef(Py_ssize_t);}
static void *array_QStringRef(Py_ssize_t sipNrElem)
{
    return new  ::QStringRef[sipNrElem];
}


extern "C" {static void *copy_QStringRef(const void *, Py_ssize_t);}
static void *copy_QStringRef(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStringRef(reinterpret_cast<const  ::QStringRef *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QStringRef(void *, int);}
static void release_QStringRef(void *ptr, int)
{
    delete reinterpret_cast< ::QStringRef *>(ptr);
}



extern "C" {static int convertTo_QStringRef(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStringRef(PyObject *,void **,int *,PyObject *)
{
#line 63 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
    // Qt only ever returns a QStringRef so this conversion isn't needed.
    return 0;
#line 69 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQStringRef.cpp"
}


extern "C" {static PyObject *convertFrom_QStringRef(void *, PyObject *);}
static PyObject *convertFrom_QStringRef(void *sipCppV, PyObject *)
{
    ::QStringRef *sipCpp = reinterpret_cast< ::QStringRef *>(sipCppV);

#line 68 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
    return qpycore_PyObject_FromQString(sipCpp->toString());
#line 80 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQStringRef.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QStringRef = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QStringRef,     /* QStringRef */
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
    assign_QStringRef,
    array_QStringRef,
    copy_QStringRef,
    release_QStringRef,
    convertTo_QStringRef,
    convertFrom_QStringRef
};