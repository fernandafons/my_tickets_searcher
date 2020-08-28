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

#line 70 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"

#line 70 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"


extern "C" {static long slot_QPinchGesture_ChangeFlags___hash__(PyObject *);}
static long slot_QPinchGesture_ChangeFlags___hash__(PyObject *sipSelf)
{
     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QPinchGesture::ChangeFlags::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QPinchGesture_ChangeFlags___bool__(PyObject *);}
static int slot_QPinchGesture_ChangeFlags___bool__(PyObject *sipSelf)
{
     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPinchGesture::ChangeFlags::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPinchGesture::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPinchGesture::ChangeFlags::Int() != a0->operator QPinchGesture::ChangeFlags::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"
            sipReleaseType(const_cast< ::QPinchGesture::ChangeFlags *>(a0),sipType_QPinchGesture_ChangeFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QPinchGesture_ChangeFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPinchGesture::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPinchGesture::ChangeFlags::Int() == a0->operator QPinchGesture::ChangeFlags::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"
            sipReleaseType(const_cast< ::QPinchGesture::ChangeFlags *>(a0),sipType_QPinchGesture_ChangeFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QPinchGesture_ChangeFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QPinchGesture::ChangeFlags(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"

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


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QPinchGesture::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPinchGesture_ChangeFlags, &a0, &a0State, &a1))
        {
             ::QPinchGesture::ChangeFlags*sipRes;

            sipRes = new  ::QPinchGesture::ChangeFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QPinchGesture::ChangeFlags(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"

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


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QPinchGesture::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPinchGesture_ChangeFlags, &a0, &a0State, &a1))
        {
             ::QPinchGesture::ChangeFlags*sipRes;

            sipRes = new  ::QPinchGesture::ChangeFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QPinchGesture::ChangeFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QPinchGesture::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPinchGesture_ChangeFlags, &a0, &a0State, &a1))
        {
             ::QPinchGesture::ChangeFlags*sipRes;

            sipRes = new  ::QPinchGesture::ChangeFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___invert__(PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___invert__(PyObject *sipSelf)
{
     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QPinchGesture::ChangeFlags*sipRes;

            sipRes = new  ::QPinchGesture::ChangeFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___int__(PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___int__(PyObject *sipSelf)
{
     ::QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

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
extern "C" {static void release_QPinchGesture_ChangeFlags(void *, int);}
static void release_QPinchGesture_ChangeFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipCppV);
}


extern "C" {static void *array_QPinchGesture_ChangeFlags(Py_ssize_t);}
static void *array_QPinchGesture_ChangeFlags(Py_ssize_t sipNrElem)
{
    return new  ::QPinchGesture::ChangeFlags[sipNrElem];
}


extern "C" {static void assign_QPinchGesture_ChangeFlags(void *, Py_ssize_t, void *);}
static void assign_QPinchGesture_ChangeFlags(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPinchGesture::ChangeFlags *>(sipSrc);
}


extern "C" {static void *copy_QPinchGesture_ChangeFlags(const void *, Py_ssize_t);}
static void *copy_QPinchGesture_ChangeFlags(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QPinchGesture::ChangeFlags(reinterpret_cast<const  ::QPinchGesture::ChangeFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPinchGesture_ChangeFlags(sipSimpleWrapper *);}
static void dealloc_QPinchGesture_ChangeFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPinchGesture_ChangeFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPinchGesture_ChangeFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPinchGesture_ChangeFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPinchGesture::ChangeFlags *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QPinchGesture::ChangeFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QPinchGesture::ChangeFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QPinchGesture::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State))
        {
            sipCpp = new  ::QPinchGesture::ChangeFlags(*a0);
            sipReleaseType(const_cast< ::QPinchGesture::ChangeFlags *>(a0),sipType_QPinchGesture_ChangeFlags,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QPinchGesture_ChangeFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPinchGesture_ChangeFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QPinchGesture::ChangeFlags **sipCppPtr = reinterpret_cast< ::QPinchGesture::ChangeFlags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QPinchGesture::ChangeFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QPinchGesture_ChangeFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlag)))
{
    *sipCppPtr = new QPinchGesture::ChangeFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipConvertToType(sipPy, sipType_QPinchGesture_ChangeFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPinchGesture_ChangeFlags[] = {
    {(void *)slot_QPinchGesture_ChangeFlags___hash__, hash_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___bool__, bool_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___ne__, ne_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___eq__, eq_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___ixor__, ixor_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___xor__, xor_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___ior__, ior_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___or__, or_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___iand__, iand_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___and__, and_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___invert__, invert_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QPinchGesture_ChangeFlags, "\1QPinchGesture.ChangeFlags()\n"
"QPinchGesture.ChangeFlags(Union[QPinchGesture.ChangeFlags, QPinchGesture.ChangeFlag])\n"
"QPinchGesture.ChangeFlags(QPinchGesture.ChangeFlags)");


static pyqt5ClassPluginDef plugin_QPinchGesture_ChangeFlags = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QPinchGesture_ChangeFlags = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPinchGesture__ChangeFlags,
        SIP_NULLPTR,
        &plugin_QPinchGesture_ChangeFlags
    },
    {
        sipNameNr_ChangeFlags,
        {245, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QPinchGesture_ChangeFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QPinchGesture_ChangeFlags,
    init_type_QPinchGesture_ChangeFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QPinchGesture_ChangeFlags,
    assign_QPinchGesture_ChangeFlags,
    array_QPinchGesture_ChangeFlags,
    copy_QPinchGesture_ChangeFlags,
    release_QPinchGesture_ChangeFlags,
    SIP_NULLPTR,
    convertTo_QPinchGesture_ChangeFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
