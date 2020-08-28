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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQModelIndex.cpp"

#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQModelIndex.cpp"
#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQModelIndex.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQModelIndex.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQModelIndex.cpp"


PyDoc_STRVAR(doc_QModelIndex_child, "child(self, int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QModelIndex_child(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QModelIndex, &sipCpp, &a0, &a1))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->child(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_child, doc_QModelIndex_child);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_row, "row(self) -> int");

extern "C" {static PyObject *meth_QModelIndex_row(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_row(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->row();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_row, doc_QModelIndex_row);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_column, "column(self) -> int");

extern "C" {static PyObject *meth_QModelIndex_column(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->column();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_column, doc_QModelIndex_column);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_data, "data(self, role: int = Qt.DisplayRole) -> Any");

extern "C" {static PyObject *meth_QModelIndex_data(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_data(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = Qt::DisplayRole;
        const  ::QModelIndex *sipCpp;

        static const char *sipKwdList[] = {
            sipName_role,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_QModelIndex, &sipCpp, &a0))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->data(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_data, doc_QModelIndex_data);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_flags, "flags(self) -> Qt.ItemFlags");

extern "C" {static PyObject *meth_QModelIndex_flags(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
             ::Qt::ItemFlags*sipRes;

            sipRes = new  ::Qt::ItemFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_flags, doc_QModelIndex_flags);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_internalPointer, "internalPointer(self) -> object");

extern "C" {static PyObject *meth_QModelIndex_internalPointer(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_internalPointer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 38 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
        sipRes = reinterpret_cast<PyObject *>(sipCpp->internalPointer());
        
        if (!sipRes)
            sipRes = Py_None;
        
        Py_INCREF(sipRes);
#line 209 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQModelIndex.cpp"

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_internalPointer, doc_QModelIndex_internalPointer);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_internalId, "internalId(self) -> int");

extern "C" {static PyObject *meth_QModelIndex_internalId(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_internalId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;

#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
        // Python needs to treat the result as an unsigned value (which may not happen
        // on 64 bit systems).  Instead we get the real value as it is stored (as a
        // void *) and let Python convert that.
        sipRes = PyLong_FromVoidPtr(sipCpp->internalPointer());
#line 241 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQModelIndex.cpp"

            return sipRes;
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_internalId, doc_QModelIndex_internalId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_model, "model(self) -> QAbstractItemModel");

extern "C" {static PyObject *meth_QModelIndex_model(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            const  ::QAbstractItemModel*sipRes;

            sipRes = sipCpp->model();

            return sipConvertFromType(const_cast< ::QAbstractItemModel *>(sipRes),sipType_QAbstractItemModel,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_model, doc_QModelIndex_model);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QModelIndex_isValid(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_isValid, doc_QModelIndex_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_parent, "parent(self) -> QModelIndex");

extern "C" {static PyObject *meth_QModelIndex_parent(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->parent());

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_parent, doc_QModelIndex_parent);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_sibling, "sibling(self, int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QModelIndex_sibling(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_sibling(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1;
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QModelIndex, &sipCpp, &a0, &a1))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->sibling(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_sibling, doc_QModelIndex_sibling);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_siblingAtColumn, "siblingAtColumn(self, int) -> QModelIndex");

extern "C" {static PyObject *meth_QModelIndex_siblingAtColumn(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_siblingAtColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QModelIndex, &sipCpp, &a0))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->siblingAtColumn(a0));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_siblingAtColumn, doc_QModelIndex_siblingAtColumn);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QModelIndex_siblingAtRow, "siblingAtRow(self, int) -> QModelIndex");

extern "C" {static PyObject *meth_QModelIndex_siblingAtRow(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_siblingAtRow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QModelIndex, &sipCpp, &a0))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->siblingAtRow(a0));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_siblingAtRow, doc_QModelIndex_siblingAtRow);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QModelIndex___ge__(PyObject *,PyObject *);}
static PyObject *slot_QModelIndex___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QModelIndex *sipCpp = reinterpret_cast< ::QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::QModelIndex::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QModelIndex, sipSelf, sipArg);
}


extern "C" {static long slot_QModelIndex___hash__(PyObject *);}
static long slot_QModelIndex___hash__(PyObject *sipSelf)
{
     ::QModelIndex *sipCpp = reinterpret_cast< ::QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 69 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractitemmodel.sip"
        sipRes = qHash(*sipCpp);
#line 466 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQModelIndex.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QModelIndex___ne__(PyObject *,PyObject *);}
static PyObject *slot_QModelIndex___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QModelIndex *sipCpp = reinterpret_cast< ::QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QModelIndex::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QModelIndex, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QModelIndex___lt__(PyObject *,PyObject *);}
static PyObject *slot_QModelIndex___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QModelIndex *sipCpp = reinterpret_cast< ::QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QModelIndex::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QModelIndex, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QModelIndex___eq__(PyObject *,PyObject *);}
static PyObject *slot_QModelIndex___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QModelIndex *sipCpp = reinterpret_cast< ::QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QModelIndex::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QModelIndex, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QModelIndex(void *, int);}
static void release_QModelIndex(void *sipCppV, int)
{
    delete reinterpret_cast< ::QModelIndex *>(sipCppV);
}


extern "C" {static void *array_QModelIndex(Py_ssize_t);}
static void *array_QModelIndex(Py_ssize_t sipNrElem)
{
    return new  ::QModelIndex[sipNrElem];
}


extern "C" {static void assign_QModelIndex(void *, Py_ssize_t, void *);}
static void assign_QModelIndex(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QModelIndex *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QModelIndex *>(sipSrc);
}


extern "C" {static void *copy_QModelIndex(const void *, Py_ssize_t);}
static void *copy_QModelIndex(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QModelIndex(reinterpret_cast<const  ::QModelIndex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QModelIndex(sipSimpleWrapper *);}
static void dealloc_QModelIndex(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QModelIndex(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QModelIndex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QModelIndex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QModelIndex *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QModelIndex();

            return sipCpp;
        }
    }

    {
        const  ::QModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QModelIndex, &a0))
        {
            sipCpp = new  ::QModelIndex(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QPersistentModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QPersistentModelIndex, &a0))
        {
            sipCpp = new  ::QModelIndex(a0->operator const  ::QModelIndex&());

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QModelIndex[] = {
    {(void *)slot_QModelIndex___ge__, ge_slot},
    {(void *)slot_QModelIndex___hash__, hash_slot},
    {(void *)slot_QModelIndex___ne__, ne_slot},
    {(void *)slot_QModelIndex___lt__, lt_slot},
    {(void *)slot_QModelIndex___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QModelIndex[] = {
    {sipName_child, meth_QModelIndex_child, METH_VARARGS, doc_QModelIndex_child},
    {sipName_column, meth_QModelIndex_column, METH_VARARGS, doc_QModelIndex_column},
    {sipName_data, SIP_MLMETH_CAST(meth_QModelIndex_data), METH_VARARGS|METH_KEYWORDS, doc_QModelIndex_data},
    {sipName_flags, meth_QModelIndex_flags, METH_VARARGS, doc_QModelIndex_flags},
    {sipName_internalId, meth_QModelIndex_internalId, METH_VARARGS, doc_QModelIndex_internalId},
    {sipName_internalPointer, meth_QModelIndex_internalPointer, METH_VARARGS, doc_QModelIndex_internalPointer},
    {sipName_isValid, meth_QModelIndex_isValid, METH_VARARGS, doc_QModelIndex_isValid},
    {sipName_model, meth_QModelIndex_model, METH_VARARGS, doc_QModelIndex_model},
    {sipName_parent, meth_QModelIndex_parent, METH_VARARGS, doc_QModelIndex_parent},
    {sipName_row, meth_QModelIndex_row, METH_VARARGS, doc_QModelIndex_row},
    {sipName_sibling, meth_QModelIndex_sibling, METH_VARARGS, doc_QModelIndex_sibling},
    {sipName_siblingAtColumn, meth_QModelIndex_siblingAtColumn, METH_VARARGS, doc_QModelIndex_siblingAtColumn},
    {sipName_siblingAtRow, meth_QModelIndex_siblingAtRow, METH_VARARGS, doc_QModelIndex_siblingAtRow}
};

PyDoc_STRVAR(doc_QModelIndex, "\1QModelIndex()\n"
"QModelIndex(QModelIndex)\n"
"QModelIndex(QPersistentModelIndex)");


static pyqt5ClassPluginDef plugin_QModelIndex = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QModelIndex = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QModelIndex,
        SIP_NULLPTR,
        &plugin_QModelIndex
    },
    {
        sipNameNr_QModelIndex,
        {0, 0, 1},
        13, methods_QModelIndex,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QModelIndex,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QModelIndex,
    init_type_QModelIndex,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QModelIndex,
    assign_QModelIndex,
    array_QModelIndex,
    copy_QModelIndex,
    release_QModelIndex,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
