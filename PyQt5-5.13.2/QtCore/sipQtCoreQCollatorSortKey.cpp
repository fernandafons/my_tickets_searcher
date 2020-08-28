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

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qcollator.sip"
#include <qcollator.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQCollatorSortKey.cpp"



PyDoc_STRVAR(doc_QCollatorSortKey_swap, "swap(self, QCollatorSortKey)");

extern "C" {static PyObject *meth_QCollatorSortKey_swap(PyObject *, PyObject *);}
static PyObject *meth_QCollatorSortKey_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QCollatorSortKey* a0;
         ::QCollatorSortKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QCollatorSortKey, &sipCpp, sipType_QCollatorSortKey, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QCollatorSortKey, sipName_swap, doc_QCollatorSortKey_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QCollatorSortKey_compare, "compare(self, QCollatorSortKey) -> int");

extern "C" {static PyObject *meth_QCollatorSortKey_compare(PyObject *, PyObject *);}
static PyObject *meth_QCollatorSortKey_compare(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QCollatorSortKey* a0;
        const  ::QCollatorSortKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QCollatorSortKey, &sipCpp, sipType_QCollatorSortKey, &a0))
        {
            int sipRes;

            sipRes = sipCpp->compare(*a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QCollatorSortKey, sipName_compare, doc_QCollatorSortKey_compare);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QCollatorSortKey___ge__(PyObject *,PyObject *);}
static PyObject *slot_QCollatorSortKey___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QCollatorSortKey *sipCpp = reinterpret_cast< ::QCollatorSortKey *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCollatorSortKey));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QCollatorSortKey* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QCollatorSortKey, &a0))
        {
            bool sipRes;

            sipRes = !operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QCollatorSortKey, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QCollatorSortKey___lt__(PyObject *,PyObject *);}
static PyObject *slot_QCollatorSortKey___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QCollatorSortKey *sipCpp = reinterpret_cast< ::QCollatorSortKey *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCollatorSortKey));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QCollatorSortKey* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QCollatorSortKey, &a0))
        {
            bool sipRes;

            sipRes = operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QCollatorSortKey, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QCollatorSortKey(void *, int);}
static void release_QCollatorSortKey(void *sipCppV, int)
{
    delete reinterpret_cast< ::QCollatorSortKey *>(sipCppV);
}


extern "C" {static void assign_QCollatorSortKey(void *, Py_ssize_t, void *);}
static void assign_QCollatorSortKey(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QCollatorSortKey *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QCollatorSortKey *>(sipSrc);
}


extern "C" {static void *copy_QCollatorSortKey(const void *, Py_ssize_t);}
static void *copy_QCollatorSortKey(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QCollatorSortKey(reinterpret_cast<const  ::QCollatorSortKey *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCollatorSortKey(sipSimpleWrapper *);}
static void dealloc_QCollatorSortKey(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QCollatorSortKey(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QCollatorSortKey(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCollatorSortKey(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QCollatorSortKey *sipCpp = SIP_NULLPTR;

    {
        const  ::QCollatorSortKey* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QCollatorSortKey, &a0))
        {
            sipCpp = new  ::QCollatorSortKey(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QCollatorSortKey[] = {
    {(void *)slot_QCollatorSortKey___ge__, ge_slot},
    {(void *)slot_QCollatorSortKey___lt__, lt_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QCollatorSortKey[] = {
    {sipName_compare, meth_QCollatorSortKey_compare, METH_VARARGS, doc_QCollatorSortKey_compare},
    {sipName_swap, meth_QCollatorSortKey_swap, METH_VARARGS, doc_QCollatorSortKey_swap}
};

PyDoc_STRVAR(doc_QCollatorSortKey, "\1QCollatorSortKey(QCollatorSortKey)");


static pyqt5ClassPluginDef plugin_QCollatorSortKey = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QCollatorSortKey = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QCollatorSortKey,
        SIP_NULLPTR,
        &plugin_QCollatorSortKey
    },
    {
        sipNameNr_QCollatorSortKey,
        {0, 0, 1},
        2, methods_QCollatorSortKey,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QCollatorSortKey,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QCollatorSortKey,
    init_type_QCollatorSortKey,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QCollatorSortKey,
    assign_QCollatorSortKey,
    SIP_NULLPTR,
    copy_QCollatorSortKey,
    release_QCollatorSortKey,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};