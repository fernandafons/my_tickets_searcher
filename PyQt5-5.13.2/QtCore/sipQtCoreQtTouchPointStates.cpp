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
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"


extern "C" {static long slot_Qt_TouchPointStates___hash__(PyObject *);}
static long slot_Qt_TouchPointStates___hash__(PyObject *sipSelf)
{
     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator Qt::TouchPointStates::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_TouchPointStates___bool__(PyObject *);}
static int slot_Qt_TouchPointStates___bool__(PyObject *sipSelf)
{
     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::TouchPointStates::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_TouchPointStates___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_TouchPointStates___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::TouchPointStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_TouchPointStates, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::TouchPointStates::Int() != a0->operator Qt::TouchPointStates::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"
            sipReleaseType(const_cast< ::Qt::TouchPointStates *>(a0),sipType_Qt_TouchPointStates,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_TouchPointStates, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_TouchPointStates___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_TouchPointStates___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::TouchPointStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_TouchPointStates, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::TouchPointStates::Int() == a0->operator Qt::TouchPointStates::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"
            sipReleaseType(const_cast< ::Qt::TouchPointStates *>(a0),sipType_Qt_TouchPointStates,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_TouchPointStates, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_TouchPointStates___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_TouchPointStates___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_TouchPointStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::TouchPointStates(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"

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


extern "C" {static PyObject *slot_Qt_TouchPointStates___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_TouchPointStates___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::TouchPointStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_TouchPointStates, &a0, &a0State, &a1))
        {
             ::Qt::TouchPointStates*sipRes;

            sipRes = new  ::Qt::TouchPointStates((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_TouchPointStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_TouchPointStates,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_TouchPointStates___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_TouchPointStates___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_TouchPointStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::TouchPointStates(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"

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


extern "C" {static PyObject *slot_Qt_TouchPointStates___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_TouchPointStates___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::TouchPointStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_TouchPointStates, &a0, &a0State, &a1))
        {
             ::Qt::TouchPointStates*sipRes;

            sipRes = new  ::Qt::TouchPointStates((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_TouchPointStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_TouchPointStates,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_TouchPointStates___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_TouchPointStates___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_TouchPointStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::TouchPointStates::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_TouchPointStates___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_TouchPointStates___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::TouchPointStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_TouchPointStates, &a0, &a0State, &a1))
        {
             ::Qt::TouchPointStates*sipRes;

            sipRes = new  ::Qt::TouchPointStates((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_TouchPointStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_TouchPointStates,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_TouchPointStates___invert__(PyObject *);}
static PyObject *slot_Qt_TouchPointStates___invert__(PyObject *sipSelf)
{
     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::Qt::TouchPointStates*sipRes;

            sipRes = new  ::Qt::TouchPointStates(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_TouchPointStates,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_TouchPointStates___int__(PyObject *);}
static PyObject *slot_Qt_TouchPointStates___int__(PyObject *sipSelf)
{
     ::Qt::TouchPointStates *sipCpp = reinterpret_cast< ::Qt::TouchPointStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_TouchPointStates));

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
extern "C" {static void release_Qt_TouchPointStates(void *, int);}
static void release_Qt_TouchPointStates(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::TouchPointStates *>(sipCppV);
}


extern "C" {static void *array_Qt_TouchPointStates(Py_ssize_t);}
static void *array_Qt_TouchPointStates(Py_ssize_t sipNrElem)
{
    return new  ::Qt::TouchPointStates[sipNrElem];
}


extern "C" {static void assign_Qt_TouchPointStates(void *, Py_ssize_t, void *);}
static void assign_Qt_TouchPointStates(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::TouchPointStates *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::TouchPointStates *>(sipSrc);
}


extern "C" {static void *copy_Qt_TouchPointStates(const void *, Py_ssize_t);}
static void *copy_Qt_TouchPointStates(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::Qt::TouchPointStates(reinterpret_cast<const  ::Qt::TouchPointStates *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_TouchPointStates(sipSimpleWrapper *);}
static void dealloc_Qt_TouchPointStates(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_TouchPointStates(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_TouchPointStates(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_TouchPointStates(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::TouchPointStates *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::Qt::TouchPointStates();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::TouchPointStates(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::TouchPointStates* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_Qt_TouchPointStates, &a0, &a0State))
        {
            sipCpp = new  ::Qt::TouchPointStates(*a0);
            sipReleaseType(const_cast< ::Qt::TouchPointStates *>(a0),sipType_Qt_TouchPointStates,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_Qt_TouchPointStates(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_TouchPointStates(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::TouchPointStates **sipCppPtr = reinterpret_cast< ::Qt::TouchPointStates **>(sipCppPtrV);

#line 121 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::TouchPointStates is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_TouchPointState)) ||
            sipCanConvertToType(sipPy, sipType_Qt_TouchPointStates, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_TouchPointState)))
{
    *sipCppPtr = new Qt::TouchPointStates(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::TouchPointStates *>(sipConvertToType(sipPy, sipType_Qt_TouchPointStates, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtTouchPointStates.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_TouchPointStates[] = {
    {(void *)slot_Qt_TouchPointStates___hash__, hash_slot},
    {(void *)slot_Qt_TouchPointStates___bool__, bool_slot},
    {(void *)slot_Qt_TouchPointStates___ne__, ne_slot},
    {(void *)slot_Qt_TouchPointStates___eq__, eq_slot},
    {(void *)slot_Qt_TouchPointStates___ixor__, ixor_slot},
    {(void *)slot_Qt_TouchPointStates___xor__, xor_slot},
    {(void *)slot_Qt_TouchPointStates___ior__, ior_slot},
    {(void *)slot_Qt_TouchPointStates___or__, or_slot},
    {(void *)slot_Qt_TouchPointStates___iand__, iand_slot},
    {(void *)slot_Qt_TouchPointStates___and__, and_slot},
    {(void *)slot_Qt_TouchPointStates___invert__, invert_slot},
    {(void *)slot_Qt_TouchPointStates___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_TouchPointStates, "\1Qt.TouchPointStates()\n"
"Qt.TouchPointStates(Union[Qt.TouchPointStates, Qt.TouchPointState])\n"
"Qt.TouchPointStates(Qt.TouchPointStates)");


static pyqt5ClassPluginDef plugin_Qt_TouchPointStates = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_Qt_TouchPointStates = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__TouchPointStates,
        SIP_NULLPTR,
        &plugin_Qt_TouchPointStates
    },
    {
        sipNameNr_TouchPointStates,
        {339, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_Qt_TouchPointStates,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_Qt_TouchPointStates,
    init_type_Qt_TouchPointStates,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_Qt_TouchPointStates,
    assign_Qt_TouchPointStates,
    array_Qt_TouchPointStates,
    copy_Qt_TouchPointStates,
    release_Qt_TouchPointStates,
    SIP_NULLPTR,
    convertTo_Qt_TouchPointStates,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
