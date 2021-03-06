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

#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQStringList.cpp"



extern "C" {static void assign_QStringList(void *, Py_ssize_t, void *);}
static void assign_QStringList(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStringList *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStringList *>(sipSrc);
}


extern "C" {static void *array_QStringList(Py_ssize_t);}
static void *array_QStringList(Py_ssize_t sipNrElem)
{
    return new  ::QStringList[sipNrElem];
}


extern "C" {static void *copy_QStringList(const void *, Py_ssize_t);}
static void *copy_QStringList(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStringList(reinterpret_cast<const  ::QStringList *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QStringList(void *, int);}
static void release_QStringList(void *ptr, int)
{
    delete reinterpret_cast< ::QStringList *>(ptr);
}



extern "C" {static int convertTo_QStringList(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStringList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QStringList **sipCppPtr = reinterpret_cast< ::QStringList **>(sipCppPtrV);

#line 66 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstringlist.sip"
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

    QStringList *ql = new QStringList;
 
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

        int state;
        QString *t = reinterpret_cast<QString *>(
                sipForceConvertToType(itm, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'str' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QString, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 140 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQStringList.cpp"
}


extern "C" {static PyObject *convertFrom_QStringList(void *, PyObject *);}
static PyObject *convertFrom_QStringList(void *sipCppV, PyObject *sipTransferObj)
{
    ::QStringList *sipCpp = reinterpret_cast< ::QStringList *>(sipCppV);

#line 40 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstringlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QString *t = new QString(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QString,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, tobj);
    }

    return l;
#line 173 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQStringList.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QStringList = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QStringList,     /* QStringList */
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
    assign_QStringList,
    array_QStringList,
    copy_QStringList,
    release_QStringList,
    convertTo_QStringList,
    convertFrom_QStringList
};
