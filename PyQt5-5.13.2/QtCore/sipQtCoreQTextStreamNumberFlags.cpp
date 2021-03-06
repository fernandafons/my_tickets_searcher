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

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"


extern "C" {static long slot_QTextStream_NumberFlags___hash__(PyObject *);}
static long slot_QTextStream_NumberFlags___hash__(PyObject *sipSelf)
{
     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QTextStream::NumberFlags::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QTextStream_NumberFlags___bool__(PyObject *);}
static int slot_QTextStream_NumberFlags___bool__(PyObject *sipSelf)
{
     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextStream::NumberFlags::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextStream::NumberFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextStream_NumberFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextStream::NumberFlags::Int() != a0->operator QTextStream::NumberFlags::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"
            sipReleaseType(const_cast< ::QTextStream::NumberFlags *>(a0),sipType_QTextStream_NumberFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QTextStream_NumberFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextStream::NumberFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextStream_NumberFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextStream::NumberFlags::Int() == a0->operator QTextStream::NumberFlags::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"
            sipReleaseType(const_cast< ::QTextStream::NumberFlags *>(a0),sipType_QTextStream_NumberFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QTextStream_NumberFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = QTextStream::NumberFlags(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"

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


extern "C" {static PyObject *slot_QTextStream_NumberFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextStream::NumberFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextStream_NumberFlags, &a0, &a0State, &a1))
        {
             ::QTextStream::NumberFlags*sipRes;

            sipRes = new  ::QTextStream::NumberFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = QTextStream::NumberFlags(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"

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


extern "C" {static PyObject *slot_QTextStream_NumberFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextStream::NumberFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextStream_NumberFlags, &a0, &a0State, &a1))
        {
             ::QTextStream::NumberFlags*sipRes;

            sipRes = new  ::QTextStream::NumberFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QTextStream::NumberFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QTextStream_NumberFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextStream::NumberFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextStream_NumberFlags, &a0, &a0State, &a1))
        {
             ::QTextStream::NumberFlags*sipRes;

            sipRes = new  ::QTextStream::NumberFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___invert__(PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___invert__(PyObject *sipSelf)
{
     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QTextStream::NumberFlags*sipRes;

            sipRes = new  ::QTextStream::NumberFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___int__(PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___int__(PyObject *sipSelf)
{
     ::QTextStream::NumberFlags *sipCpp = reinterpret_cast< ::QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

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
extern "C" {static void release_QTextStream_NumberFlags(void *, int);}
static void release_QTextStream_NumberFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTextStream::NumberFlags *>(sipCppV);
}


extern "C" {static void *array_QTextStream_NumberFlags(Py_ssize_t);}
static void *array_QTextStream_NumberFlags(Py_ssize_t sipNrElem)
{
    return new  ::QTextStream::NumberFlags[sipNrElem];
}


extern "C" {static void assign_QTextStream_NumberFlags(void *, Py_ssize_t, void *);}
static void assign_QTextStream_NumberFlags(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextStream::NumberFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextStream::NumberFlags *>(sipSrc);
}


extern "C" {static void *copy_QTextStream_NumberFlags(const void *, Py_ssize_t);}
static void *copy_QTextStream_NumberFlags(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QTextStream::NumberFlags(reinterpret_cast<const  ::QTextStream::NumberFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextStream_NumberFlags(sipSimpleWrapper *);}
static void dealloc_QTextStream_NumberFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextStream_NumberFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextStream_NumberFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextStream_NumberFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextStream::NumberFlags *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QTextStream::NumberFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QTextStream::NumberFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QTextStream::NumberFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QTextStream_NumberFlags, &a0, &a0State))
        {
            sipCpp = new  ::QTextStream::NumberFlags(*a0);
            sipReleaseType(const_cast< ::QTextStream::NumberFlags *>(a0),sipType_QTextStream_NumberFlags,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QTextStream_NumberFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextStream_NumberFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QTextStream::NumberFlags **sipCppPtr = reinterpret_cast< ::QTextStream::NumberFlags **>(sipCppPtrV);

#line 121 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextStream::NumberFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextStream_NumberFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlag)))
{
    *sipCppPtr = new QTextStream::NumberFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextStream::NumberFlags *>(sipConvertToType(sipPy, sipType_QTextStream_NumberFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextStreamNumberFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextStream_NumberFlags[] = {
    {(void *)slot_QTextStream_NumberFlags___hash__, hash_slot},
    {(void *)slot_QTextStream_NumberFlags___bool__, bool_slot},
    {(void *)slot_QTextStream_NumberFlags___ne__, ne_slot},
    {(void *)slot_QTextStream_NumberFlags___eq__, eq_slot},
    {(void *)slot_QTextStream_NumberFlags___ixor__, ixor_slot},
    {(void *)slot_QTextStream_NumberFlags___xor__, xor_slot},
    {(void *)slot_QTextStream_NumberFlags___ior__, ior_slot},
    {(void *)slot_QTextStream_NumberFlags___or__, or_slot},
    {(void *)slot_QTextStream_NumberFlags___iand__, iand_slot},
    {(void *)slot_QTextStream_NumberFlags___and__, and_slot},
    {(void *)slot_QTextStream_NumberFlags___invert__, invert_slot},
    {(void *)slot_QTextStream_NumberFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextStream_NumberFlags, "\1QTextStream.NumberFlags()\n"
"QTextStream.NumberFlags(Union[QTextStream.NumberFlags, QTextStream.NumberFlag])\n"
"QTextStream.NumberFlags(QTextStream.NumberFlags)");


static pyqt5ClassPluginDef plugin_QTextStream_NumberFlags = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QTextStream_NumberFlags = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextStream__NumberFlags,
        SIP_NULLPTR,
        &plugin_QTextStream_NumberFlags
    },
    {
        sipNameNr_NumberFlags,
        {277, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTextStream_NumberFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QTextStream_NumberFlags,
    init_type_QTextStream_NumberFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTextStream_NumberFlags,
    assign_QTextStream_NumberFlags,
    array_QTextStream_NumberFlags,
    copy_QTextStream_NumberFlags,
    release_QTextStream_NumberFlags,
    SIP_NULLPTR,
    convertTo_QTextStream_NumberFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
