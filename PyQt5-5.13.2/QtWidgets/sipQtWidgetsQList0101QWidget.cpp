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

#include "sipAPIQtWidgets.h"

#line 149 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQList0101QWidget.cpp"

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQList0101QWidget.cpp"


extern "C" {static void assign_QList_0101QWidget(void *, Py_ssize_t, void *);}
static void assign_QList_0101QWidget(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QWidget*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QWidget*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QWidget(Py_ssize_t);}
static void *array_QList_0101QWidget(Py_ssize_t sipNrElem)
{
    return new QList< ::QWidget*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QWidget(const void *, Py_ssize_t);}
static void *copy_QList_0101QWidget(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new QList< ::QWidget*>(reinterpret_cast<const QList< ::QWidget*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QWidget(void *, int);}
static void release_QList_0101QWidget(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QWidget*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QWidget(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QWidget(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QWidget*> **sipCppPtr = reinterpret_cast<QList< ::QWidget*> **>(sipCppPtrV);

#line 184 "sip/QtCore/qpycore_qlist.sip"
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

    QList<QWidget *> *ql = new QList<QWidget *>;
 
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

        QWidget *t = reinterpret_cast<QWidget *>(
                sipForceConvertToType(itm, sipType_QWidget, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QWidget' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(t);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 141 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQList0101QWidget.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QWidget(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QWidget(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QWidget*> *sipCpp = reinterpret_cast<QList< ::QWidget*> *>(sipCppV);

#line 153 "sip/QtCore/qpycore_qlist.sip"
    int gc_enabled = sipEnableGC(0);
    PyObject *l = PyList_New(sipCpp->size());

    if (l)
    {
        for (int i = 0; i < sipCpp->size(); ++i)
        {
            QWidget *t = sipCpp->at(i);

            // The explicit (void *) cast allows QWidget to be const.
            PyObject *tobj = sipConvertFromType((void *)t, sipType_QWidget,
                    sipTransferObj);

            if (!tobj)
            {
                Py_DECREF(l);
                l = 0;

                break;
            }

            PyList_SetItem(l, i, tobj);
        }
    }

    sipEnableGC(gc_enabled);

    return l;
#line 179 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQList0101QWidget.cpp"
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0101QWidget = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_37817,     /* QList<QWidget*> */
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
    assign_QList_0101QWidget,
    array_QList_0101QWidget,
    copy_QList_0101QWidget,
    release_QList_0101QWidget,
    convertTo_QList_0101QWidget,
    convertFrom_QList_0101QWidget
};
