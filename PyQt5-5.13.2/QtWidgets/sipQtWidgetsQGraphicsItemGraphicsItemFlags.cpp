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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"


extern "C" {static long slot_QGraphicsItem_GraphicsItemFlags___hash__(PyObject *);}
static long slot_QGraphicsItem_GraphicsItemFlags___hash__(PyObject *sipSelf)
{
     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QGraphicsItem::GraphicsItemFlags::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QGraphicsItem_GraphicsItemFlags___bool__(PyObject *);}
static int slot_QGraphicsItem_GraphicsItemFlags___bool__(PyObject *sipSelf)
{
     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsItem::GraphicsItemFlags::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsItem::GraphicsItemFlags::Int() != a0->operator QGraphicsItem::GraphicsItemFlags::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(const_cast< ::QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QGraphicsItem_GraphicsItemFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsItem::GraphicsItemFlags::Int() == a0->operator QGraphicsItem::GraphicsItemFlags::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(const_cast< ::QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QGraphicsItem_GraphicsItemFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QGraphicsItem::GraphicsItemFlags(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
             ::QGraphicsItem::GraphicsItemFlags*sipRes;

            sipRes = new  ::QGraphicsItem::GraphicsItemFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QGraphicsItem::GraphicsItemFlags(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
             ::QGraphicsItem::GraphicsItemFlags*sipRes;

            sipRes = new  ::QGraphicsItem::GraphicsItemFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QGraphicsItem::GraphicsItemFlags::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
             ::QGraphicsItem::GraphicsItemFlags*sipRes;

            sipRes = new  ::QGraphicsItem::GraphicsItemFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___invert__(PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___invert__(PyObject *sipSelf)
{
     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QGraphicsItem::GraphicsItemFlags*sipRes;

            sipRes = new  ::QGraphicsItem::GraphicsItemFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___int__(PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___int__(PyObject *sipSelf)
{
     ::QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return PyLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsItem_GraphicsItemFlags(void *, int);}
static void release_QGraphicsItem_GraphicsItemFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipCppV);
}


extern "C" {static void *array_QGraphicsItem_GraphicsItemFlags(Py_ssize_t);}
static void *array_QGraphicsItem_GraphicsItemFlags(Py_ssize_t sipNrElem)
{
    return new  ::QGraphicsItem::GraphicsItemFlags[sipNrElem];
}


extern "C" {static void assign_QGraphicsItem_GraphicsItemFlags(void *, Py_ssize_t, void *);}
static void assign_QGraphicsItem_GraphicsItemFlags(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags *>(sipSrc);
}


extern "C" {static void *copy_QGraphicsItem_GraphicsItemFlags(const void *, Py_ssize_t);}
static void *copy_QGraphicsItem_GraphicsItemFlags(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QGraphicsItem::GraphicsItemFlags(reinterpret_cast<const  ::QGraphicsItem::GraphicsItemFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *);}
static void dealloc_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGraphicsItem_GraphicsItemFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QGraphicsItem::GraphicsItemFlags *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QGraphicsItem::GraphicsItemFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QGraphicsItem::GraphicsItemFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            sipCpp = new  ::QGraphicsItem::GraphicsItemFlags(*a0);
            sipReleaseType(const_cast< ::QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QGraphicsItem_GraphicsItemFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsItem_GraphicsItemFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QGraphicsItem::GraphicsItemFlags **sipCppPtr = reinterpret_cast< ::QGraphicsItem::GraphicsItemFlags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsItem::GraphicsItemFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsItem_GraphicsItemFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlag)))
{
    *sipCppPtr = new QGraphicsItem::GraphicsItemFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipConvertToType(sipPy, sipType_QGraphicsItem_GraphicsItemFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQGraphicsItemGraphicsItemFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsItem_GraphicsItemFlags[] = {
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___hash__, hash_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___bool__, bool_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ne__, ne_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___eq__, eq_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ixor__, ixor_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___xor__, xor_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ior__, ior_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___or__, or_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___iand__, iand_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___and__, and_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___invert__, invert_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsItem_GraphicsItemFlags, "\1QGraphicsItem.GraphicsItemFlags()\n"
"QGraphicsItem.GraphicsItemFlags(Union[QGraphicsItem.GraphicsItemFlags, QGraphicsItem.GraphicsItemFlag])\n"
"QGraphicsItem.GraphicsItemFlags(QGraphicsItem.GraphicsItemFlags)");


static pyqt5ClassPluginDef plugin_QGraphicsItem_GraphicsItemFlags = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QGraphicsItem_GraphicsItemFlags = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsItem__GraphicsItemFlags,
        SIP_NULLPTR,
        &plugin_QGraphicsItem_GraphicsItemFlags
    },
    {
        sipNameNr_GraphicsItemFlags,
        {123, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QGraphicsItem_GraphicsItemFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QGraphicsItem_GraphicsItemFlags,
    init_type_QGraphicsItem_GraphicsItemFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QGraphicsItem_GraphicsItemFlags,
    assign_QGraphicsItem_GraphicsItemFlags,
    array_QGraphicsItem_GraphicsItemFlags,
    copy_QGraphicsItem_GraphicsItemFlags,
    release_QGraphicsItem_GraphicsItemFlags,
    SIP_NULLPTR,
    convertTo_QGraphicsItem_GraphicsItemFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
