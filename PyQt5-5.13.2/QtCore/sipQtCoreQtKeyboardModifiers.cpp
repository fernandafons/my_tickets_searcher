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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"


extern "C" {static long slot_Qt_KeyboardModifiers___hash__(PyObject *);}
static long slot_Qt_KeyboardModifiers___hash__(PyObject *sipSelf)
{
     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator Qt::KeyboardModifiers::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_KeyboardModifiers___bool__(PyObject *);}
static int slot_Qt_KeyboardModifiers___bool__(PyObject *sipSelf)
{
     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::KeyboardModifiers::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::KeyboardModifiers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_KeyboardModifiers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::KeyboardModifiers::Int() != a0->operator Qt::KeyboardModifiers::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"
            sipReleaseType(const_cast< ::Qt::KeyboardModifiers *>(a0),sipType_Qt_KeyboardModifiers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_KeyboardModifiers, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::KeyboardModifiers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_KeyboardModifiers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::KeyboardModifiers::Int() == a0->operator Qt::KeyboardModifiers::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"
            sipReleaseType(const_cast< ::Qt::KeyboardModifiers *>(a0),sipType_Qt_KeyboardModifiers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_KeyboardModifiers, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifiers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::KeyboardModifiers(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"

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


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::KeyboardModifiers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_KeyboardModifiers, &a0, &a0State, &a1))
        {
             ::Qt::KeyboardModifiers*sipRes;

            sipRes = new  ::Qt::KeyboardModifiers((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifiers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::KeyboardModifiers(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"

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


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::KeyboardModifiers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_KeyboardModifiers, &a0, &a0State, &a1))
        {
             ::Qt::KeyboardModifiers*sipRes;

            sipRes = new  ::Qt::KeyboardModifiers((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifiers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::KeyboardModifiers::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::KeyboardModifiers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_KeyboardModifiers, &a0, &a0State, &a1))
        {
             ::Qt::KeyboardModifiers*sipRes;

            sipRes = new  ::Qt::KeyboardModifiers((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_KeyboardModifiers,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___invert__(PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___invert__(PyObject *sipSelf)
{
     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::Qt::KeyboardModifiers*sipRes;

            sipRes = new  ::Qt::KeyboardModifiers(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_KeyboardModifiers___int__(PyObject *);}
static PyObject *slot_Qt_KeyboardModifiers___int__(PyObject *sipSelf)
{
     ::Qt::KeyboardModifiers *sipCpp = reinterpret_cast< ::Qt::KeyboardModifiers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_KeyboardModifiers));

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
extern "C" {static void release_Qt_KeyboardModifiers(void *, int);}
static void release_Qt_KeyboardModifiers(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::KeyboardModifiers *>(sipCppV);
}


extern "C" {static void *array_Qt_KeyboardModifiers(Py_ssize_t);}
static void *array_Qt_KeyboardModifiers(Py_ssize_t sipNrElem)
{
    return new  ::Qt::KeyboardModifiers[sipNrElem];
}


extern "C" {static void assign_Qt_KeyboardModifiers(void *, Py_ssize_t, void *);}
static void assign_Qt_KeyboardModifiers(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::KeyboardModifiers *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::KeyboardModifiers *>(sipSrc);
}


extern "C" {static void *copy_Qt_KeyboardModifiers(const void *, Py_ssize_t);}
static void *copy_Qt_KeyboardModifiers(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::Qt::KeyboardModifiers(reinterpret_cast<const  ::Qt::KeyboardModifiers *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_KeyboardModifiers(sipSimpleWrapper *);}
static void dealloc_Qt_KeyboardModifiers(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_KeyboardModifiers(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_KeyboardModifiers(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_KeyboardModifiers(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::KeyboardModifiers *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::Qt::KeyboardModifiers();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::KeyboardModifiers(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::KeyboardModifiers* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_Qt_KeyboardModifiers, &a0, &a0State))
        {
            sipCpp = new  ::Qt::KeyboardModifiers(*a0);
            sipReleaseType(const_cast< ::Qt::KeyboardModifiers *>(a0),sipType_Qt_KeyboardModifiers,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_Qt_KeyboardModifiers(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_KeyboardModifiers(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::KeyboardModifiers **sipCppPtr = reinterpret_cast< ::Qt::KeyboardModifiers **>(sipCppPtrV);

#line 121 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::KeyboardModifiers is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifier)) ||
            sipCanConvertToType(sipPy, sipType_Qt_KeyboardModifiers, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_KeyboardModifier)))
{
    *sipCppPtr = new Qt::KeyboardModifiers(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::KeyboardModifiers *>(sipConvertToType(sipPy, sipType_Qt_KeyboardModifiers, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtKeyboardModifiers.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_KeyboardModifiers[] = {
    {(void *)slot_Qt_KeyboardModifiers___hash__, hash_slot},
    {(void *)slot_Qt_KeyboardModifiers___bool__, bool_slot},
    {(void *)slot_Qt_KeyboardModifiers___ne__, ne_slot},
    {(void *)slot_Qt_KeyboardModifiers___eq__, eq_slot},
    {(void *)slot_Qt_KeyboardModifiers___ixor__, ixor_slot},
    {(void *)slot_Qt_KeyboardModifiers___xor__, xor_slot},
    {(void *)slot_Qt_KeyboardModifiers___ior__, ior_slot},
    {(void *)slot_Qt_KeyboardModifiers___or__, or_slot},
    {(void *)slot_Qt_KeyboardModifiers___iand__, iand_slot},
    {(void *)slot_Qt_KeyboardModifiers___and__, and_slot},
    {(void *)slot_Qt_KeyboardModifiers___invert__, invert_slot},
    {(void *)slot_Qt_KeyboardModifiers___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_KeyboardModifiers, "\1Qt.KeyboardModifiers()\n"
"Qt.KeyboardModifiers(Union[Qt.KeyboardModifiers, Qt.KeyboardModifier])\n"
"Qt.KeyboardModifiers(Qt.KeyboardModifiers)");


static pyqt5ClassPluginDef plugin_Qt_KeyboardModifiers = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_Qt_KeyboardModifiers = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__KeyboardModifiers,
        SIP_NULLPTR,
        &plugin_Qt_KeyboardModifiers
    },
    {
        sipNameNr_KeyboardModifiers,
        {339, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_Qt_KeyboardModifiers,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_Qt_KeyboardModifiers,
    init_type_Qt_KeyboardModifiers,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_Qt_KeyboardModifiers,
    assign_Qt_KeyboardModifiers,
    array_Qt_KeyboardModifiers,
    copy_Qt_KeyboardModifiers,
    release_Qt_KeyboardModifiers,
    SIP_NULLPTR,
    convertTo_Qt_KeyboardModifiers,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
