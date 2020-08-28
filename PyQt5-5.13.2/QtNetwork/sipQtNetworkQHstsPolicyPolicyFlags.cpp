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

#include "sipAPIQtNetwork.h"

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhstspolicy.sip"
#include <qhstspolicy.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhstspolicy.sip"
#include <qhstspolicy.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"


extern "C" {static long slot_QHstsPolicy_PolicyFlags___hash__(PyObject *);}
static long slot_QHstsPolicy_PolicyFlags___hash__(PyObject *sipSelf)
{
     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QHstsPolicy::PolicyFlags::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QHstsPolicy_PolicyFlags___bool__(PyObject *);}
static int slot_QHstsPolicy_PolicyFlags___bool__(PyObject *sipSelf)
{
     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QHstsPolicy::PolicyFlags::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHstsPolicy::PolicyFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QHstsPolicy_PolicyFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QHstsPolicy::PolicyFlags::Int() != a0->operator QHstsPolicy::PolicyFlags::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"
            sipReleaseType(const_cast< ::QHstsPolicy::PolicyFlags *>(a0),sipType_QHstsPolicy_PolicyFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QHstsPolicy_PolicyFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHstsPolicy::PolicyFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QHstsPolicy_PolicyFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QHstsPolicy::PolicyFlags::Int() == a0->operator QHstsPolicy::PolicyFlags::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"
            sipReleaseType(const_cast< ::QHstsPolicy::PolicyFlags *>(a0),sipType_QHstsPolicy_PolicyFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QHstsPolicy_PolicyFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QHstsPolicy_PolicyFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QHstsPolicy::PolicyFlags(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"

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


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHstsPolicy::PolicyFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QHstsPolicy_PolicyFlags, &a0, &a0State, &a1))
        {
             ::QHstsPolicy::PolicyFlags*sipRes;

            sipRes = new  ::QHstsPolicy::PolicyFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QHstsPolicy_PolicyFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QHstsPolicy_PolicyFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QHstsPolicy_PolicyFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QHstsPolicy::PolicyFlags(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"

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


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHstsPolicy::PolicyFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QHstsPolicy_PolicyFlags, &a0, &a0State, &a1))
        {
             ::QHstsPolicy::PolicyFlags*sipRes;

            sipRes = new  ::QHstsPolicy::PolicyFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QHstsPolicy_PolicyFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QHstsPolicy_PolicyFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QHstsPolicy_PolicyFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QHstsPolicy::PolicyFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHstsPolicy::PolicyFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QHstsPolicy_PolicyFlags, &a0, &a0State, &a1))
        {
             ::QHstsPolicy::PolicyFlags*sipRes;

            sipRes = new  ::QHstsPolicy::PolicyFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QHstsPolicy_PolicyFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QHstsPolicy_PolicyFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___invert__(PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___invert__(PyObject *sipSelf)
{
     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QHstsPolicy::PolicyFlags*sipRes;

            sipRes = new  ::QHstsPolicy::PolicyFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QHstsPolicy_PolicyFlags,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QHstsPolicy_PolicyFlags___int__(PyObject *);}
static PyObject *slot_QHstsPolicy_PolicyFlags___int__(PyObject *sipSelf)
{
     ::QHstsPolicy::PolicyFlags *sipCpp = reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHstsPolicy_PolicyFlags));

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
extern "C" {static void release_QHstsPolicy_PolicyFlags(void *, int);}
static void release_QHstsPolicy_PolicyFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipCppV);
}


extern "C" {static void *array_QHstsPolicy_PolicyFlags(Py_ssize_t);}
static void *array_QHstsPolicy_PolicyFlags(Py_ssize_t sipNrElem)
{
    return new  ::QHstsPolicy::PolicyFlags[sipNrElem];
}


extern "C" {static void assign_QHstsPolicy_PolicyFlags(void *, Py_ssize_t, void *);}
static void assign_QHstsPolicy_PolicyFlags(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QHstsPolicy::PolicyFlags *>(sipSrc);
}


extern "C" {static void *copy_QHstsPolicy_PolicyFlags(const void *, Py_ssize_t);}
static void *copy_QHstsPolicy_PolicyFlags(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QHstsPolicy::PolicyFlags(reinterpret_cast<const  ::QHstsPolicy::PolicyFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHstsPolicy_PolicyFlags(sipSimpleWrapper *);}
static void dealloc_QHstsPolicy_PolicyFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QHstsPolicy_PolicyFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QHstsPolicy_PolicyFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHstsPolicy_PolicyFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QHstsPolicy::PolicyFlags *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QHstsPolicy::PolicyFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QHstsPolicy::PolicyFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QHstsPolicy::PolicyFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QHstsPolicy_PolicyFlags, &a0, &a0State))
        {
            sipCpp = new  ::QHstsPolicy::PolicyFlags(*a0);
            sipReleaseType(const_cast< ::QHstsPolicy::PolicyFlags *>(a0),sipType_QHstsPolicy_PolicyFlags,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QHstsPolicy_PolicyFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHstsPolicy_PolicyFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QHstsPolicy::PolicyFlags **sipCppPtr = reinterpret_cast< ::QHstsPolicy::PolicyFlags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QHstsPolicy::PolicyFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QHstsPolicy_PolicyFlag)) ||
            sipCanConvertToType(sipPy, sipType_QHstsPolicy_PolicyFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QHstsPolicy_PolicyFlag)))
{
    *sipCppPtr = new QHstsPolicy::PolicyFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QHstsPolicy::PolicyFlags *>(sipConvertToType(sipPy, sipType_QHstsPolicy_PolicyFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHstsPolicyPolicyFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QHstsPolicy_PolicyFlags[] = {
    {(void *)slot_QHstsPolicy_PolicyFlags___hash__, hash_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___bool__, bool_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___ne__, ne_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___eq__, eq_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___ixor__, ixor_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___xor__, xor_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___ior__, ior_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___or__, or_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___iand__, iand_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___and__, and_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___invert__, invert_slot},
    {(void *)slot_QHstsPolicy_PolicyFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QHstsPolicy_PolicyFlags, "\1QHstsPolicy.PolicyFlags()\n"
"QHstsPolicy.PolicyFlags(Union[QHstsPolicy.PolicyFlags, QHstsPolicy.PolicyFlag])\n"
"QHstsPolicy.PolicyFlags(QHstsPolicy.PolicyFlags)");


static pyqt5ClassPluginDef plugin_QHstsPolicy_PolicyFlags = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QHstsPolicy_PolicyFlags = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QHstsPolicy__PolicyFlags,
        SIP_NULLPTR,
        &plugin_QHstsPolicy_PolicyFlags
    },
    {
        sipNameNr_PolicyFlags,
        {27, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QHstsPolicy_PolicyFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QHstsPolicy_PolicyFlags,
    init_type_QHstsPolicy_PolicyFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QHstsPolicy_PolicyFlags,
    assign_QHstsPolicy_PolicyFlags,
    array_QHstsPolicy_PolicyFlags,
    copy_QHstsPolicy_PolicyFlags,
    release_QHstsPolicy_PolicyFlags,
    SIP_NULLPTR,
    convertTo_QHstsPolicy_PolicyFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
