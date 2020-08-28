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

#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQPersistentModelIndex.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQPersistentModelIndex.cpp"
#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQPersistentModelIndex.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQPersistentModelIndex.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQPersistentModelIndex.cpp"


PyDoc_STRVAR(doc_QPersistentModelIndex_row, "row(self) -> int");

extern "C" {static PyObject *meth_QPersistentModelIndex_row(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_row(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->row();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_row, doc_QPersistentModelIndex_row);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_column, "column(self) -> int");

extern "C" {static PyObject *meth_QPersistentModelIndex_column(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->column();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_column, doc_QPersistentModelIndex_column);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_data, "data(self, role: int = Qt.DisplayRole) -> Any");

extern "C" {static PyObject *meth_QPersistentModelIndex_data(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_data(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = Qt::DisplayRole;
        const  ::QPersistentModelIndex *sipCpp;

        static const char *sipKwdList[] = {
            sipName_role,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->data(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_data, doc_QPersistentModelIndex_data);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_flags, "flags(self) -> Qt.ItemFlags");

extern "C" {static PyObject *meth_QPersistentModelIndex_flags(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
             ::Qt::ItemFlags*sipRes;

            sipRes = new  ::Qt::ItemFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_flags, doc_QPersistentModelIndex_flags);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_parent, "parent(self) -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_parent(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->parent());

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_parent, doc_QPersistentModelIndex_parent);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_sibling, "sibling(self, int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_sibling(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_sibling(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
        const  ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0, &a1))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->sibling(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_sibling, doc_QPersistentModelIndex_sibling);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_child, "child(self, int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_child(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
        const  ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0, &a1))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->child(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_child, doc_QPersistentModelIndex_child);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_model, "model(self) -> QAbstractItemModel");

extern "C" {static PyObject *meth_QPersistentModelIndex_model(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            const  ::QAbstractItemModel*sipRes;

            sipRes = sipCpp->model();

            return sipConvertFromType(const_cast< ::QAbstractItemModel *>(sipRes),sipType_QAbstractItemModel,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_model, doc_QPersistentModelIndex_model);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QPersistentModelIndex_isValid(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_isValid, doc_QPersistentModelIndex_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_swap, "swap(self, QPersistentModelIndex)");

extern "C" {static PyObject *meth_QPersistentModelIndex_swap(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QPersistentModelIndex* a0;
         ::QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, sipType_QPersistentModelIndex, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_swap, doc_QPersistentModelIndex_swap);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QPersistentModelIndex___ge__(PyObject *,PyObject *);}
static PyObject *slot_QPersistentModelIndex___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPersistentModelIndex *sipCpp = reinterpret_cast< ::QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::QPersistentModelIndex::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QPersistentModelIndex, sipSelf, sipArg);
}


extern "C" {static long slot_QPersistentModelIndex___hash__(PyObject *);}
static long slot_QPersistentModelIndex___hash__(PyObject *sipSelf)
{
     ::QPersistentModelIndex *sipCpp = reinterpret_cast< ::QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 102 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
        sipRes = qHash(*sipCpp);
#line 371 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQPersistentModelIndex.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPersistentModelIndex___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPersistentModelIndex___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPersistentModelIndex *sipCpp = reinterpret_cast< ::QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QPersistentModelIndex::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QPersistentModelIndex::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QPersistentModelIndex, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPersistentModelIndex___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPersistentModelIndex___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPersistentModelIndex *sipCpp = reinterpret_cast< ::QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QPersistentModelIndex::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QPersistentModelIndex::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QPersistentModelIndex, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPersistentModelIndex___lt__(PyObject *,PyObject *);}
static PyObject *slot_QPersistentModelIndex___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPersistentModelIndex *sipCpp = reinterpret_cast< ::QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPersistentModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QPersistentModelIndex::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QPersistentModelIndex, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QPersistentModelIndex(void *, int);}
static void release_QPersistentModelIndex(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPersistentModelIndex *>(sipCppV);
}


extern "C" {static void *array_QPersistentModelIndex(Py_ssize_t);}
static void *array_QPersistentModelIndex(Py_ssize_t sipNrElem)
{
    return new  ::QPersistentModelIndex[sipNrElem];
}


extern "C" {static void assign_QPersistentModelIndex(void *, Py_ssize_t, void *);}
static void assign_QPersistentModelIndex(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPersistentModelIndex *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPersistentModelIndex *>(sipSrc);
}


extern "C" {static void *copy_QPersistentModelIndex(const void *, Py_ssize_t);}
static void *copy_QPersistentModelIndex(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QPersistentModelIndex(reinterpret_cast<const  ::QPersistentModelIndex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPersistentModelIndex(sipSimpleWrapper *);}
static void dealloc_QPersistentModelIndex(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPersistentModelIndex(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPersistentModelIndex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPersistentModelIndex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPersistentModelIndex *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QPersistentModelIndex();

            return sipCpp;
        }
    }

    {
        const  ::QModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QModelIndex, &a0))
        {
            sipCpp = new  ::QPersistentModelIndex(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QPersistentModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QPersistentModelIndex, &a0))
        {
            sipCpp = new  ::QPersistentModelIndex(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPersistentModelIndex[] = {
    {(void *)slot_QPersistentModelIndex___ge__, ge_slot},
    {(void *)slot_QPersistentModelIndex___hash__, hash_slot},
    {(void *)slot_QPersistentModelIndex___ne__, ne_slot},
    {(void *)slot_QPersistentModelIndex___eq__, eq_slot},
    {(void *)slot_QPersistentModelIndex___lt__, lt_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPersistentModelIndex[] = {
    {sipName_child, meth_QPersistentModelIndex_child, METH_VARARGS, doc_QPersistentModelIndex_child},
    {sipName_column, meth_QPersistentModelIndex_column, METH_VARARGS, doc_QPersistentModelIndex_column},
    {sipName_data, SIP_MLMETH_CAST(meth_QPersistentModelIndex_data), METH_VARARGS|METH_KEYWORDS, doc_QPersistentModelIndex_data},
    {sipName_flags, meth_QPersistentModelIndex_flags, METH_VARARGS, doc_QPersistentModelIndex_flags},
    {sipName_isValid, meth_QPersistentModelIndex_isValid, METH_VARARGS, doc_QPersistentModelIndex_isValid},
    {sipName_model, meth_QPersistentModelIndex_model, METH_VARARGS, doc_QPersistentModelIndex_model},
    {sipName_parent, meth_QPersistentModelIndex_parent, METH_VARARGS, doc_QPersistentModelIndex_parent},
    {sipName_row, meth_QPersistentModelIndex_row, METH_VARARGS, doc_QPersistentModelIndex_row},
    {sipName_sibling, meth_QPersistentModelIndex_sibling, METH_VARARGS, doc_QPersistentModelIndex_sibling},
    {sipName_swap, meth_QPersistentModelIndex_swap, METH_VARARGS, doc_QPersistentModelIndex_swap}
};

PyDoc_STRVAR(doc_QPersistentModelIndex, "\1QPersistentModelIndex()\n"
"QPersistentModelIndex(QModelIndex)\n"
"QPersistentModelIndex(QPersistentModelIndex)");


static pyqt5ClassPluginDef plugin_QPersistentModelIndex = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QPersistentModelIndex = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPersistentModelIndex,
        SIP_NULLPTR,
        &plugin_QPersistentModelIndex
    },
    {
        sipNameNr_QPersistentModelIndex,
        {0, 0, 1},
        10, methods_QPersistentModelIndex,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QPersistentModelIndex,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QPersistentModelIndex,
    init_type_QPersistentModelIndex,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QPersistentModelIndex,
    assign_QPersistentModelIndex,
    array_QPersistentModelIndex,
    copy_QPersistentModelIndex,
    release_QPersistentModelIndex,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
