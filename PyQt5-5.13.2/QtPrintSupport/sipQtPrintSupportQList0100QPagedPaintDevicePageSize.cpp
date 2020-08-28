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

#include "sipAPIQtPrintSupport.h"

#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtPrintSupport/qpyprintsupport_qlist.sip"
#include <qprinterinfo.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp"

#line 26 "sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp"


extern "C" {static void assign_QList_0100QPagedPaintDevice_PageSize(void *, Py_ssize_t, void *);}
static void assign_QList_0100QPagedPaintDevice_PageSize(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QList< ::QPagedPaintDevice::PageSize> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QList< ::QPagedPaintDevice::PageSize> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QPagedPaintDevice_PageSize(Py_ssize_t);}
static void *array_QList_0100QPagedPaintDevice_PageSize(Py_ssize_t sipNrElem)
{
    return new  ::QList< ::QPagedPaintDevice::PageSize>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QPagedPaintDevice_PageSize(const void *, Py_ssize_t);}
static void *copy_QList_0100QPagedPaintDevice_PageSize(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QList< ::QPagedPaintDevice::PageSize>(reinterpret_cast<const  ::QList< ::QPagedPaintDevice::PageSize> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QPagedPaintDevice_PageSize(void *, int);}
static void release_QList_0100QPagedPaintDevice_PageSize(void *ptr, int)
{
    delete reinterpret_cast< ::QList< ::QPagedPaintDevice::PageSize> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QPagedPaintDevice_PageSize(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QPagedPaintDevice_PageSize(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QList< ::QPagedPaintDevice::PageSize> **sipCppPtr = reinterpret_cast< ::QList< ::QPagedPaintDevice::PageSize> **>(sipCppPtrV);

#line 57 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtPrintSupport/qpyprintsupport_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        PyErr_Clear();
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QPagedPaintDevice::PageSize> *ql = new QList<QPagedPaintDevice::PageSize>;

    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int v = sipConvertToEnum(itm, sipType_QPagedPaintDevice_PageSize);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QPagedPaintDevice.PageSize' is expected",
                    i, sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        ql->append(static_cast<QPagedPaintDevice::PageSize>(v));

        Py_DECREF(itm);
    }

    Py_DECREF(iter);

    *sipCppPtr = ql;

    return sipGetState(sipTransferObj);
#line 140 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QPagedPaintDevice_PageSize(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QPagedPaintDevice_PageSize(void *sipCppV, PyObject *)
{
    ::QList< ::QPagedPaintDevice::PageSize> *sipCpp = reinterpret_cast< ::QList< ::QPagedPaintDevice::PageSize> *>(sipCppV);

#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtPrintSupport/qpyprintsupport_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *eobj = sipConvertFromEnum(sipCpp->at(i),
                sipType_QPagedPaintDevice_PageSize);

        if (!eobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, eobj);
    }

    return l;
#line 171 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtPrintSupport/sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp"
}


sipMappedTypeDef sipTypeDef_QtPrintSupport_QList_0100QPagedPaintDevice_PageSize = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_118,     /* QList<QPagedPaintDevice::PageSize> */
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
    assign_QList_0100QPagedPaintDevice_PageSize,
    array_QList_0100QPagedPaintDevice_PageSize,
    copy_QList_0100QPagedPaintDevice_PageSize,
    release_QList_0100QPagedPaintDevice_PageSize,
    convertTo_QList_0100QPagedPaintDevice_PageSize,
    convertFrom_QList_0100QPagedPaintDevice_PageSize
};
