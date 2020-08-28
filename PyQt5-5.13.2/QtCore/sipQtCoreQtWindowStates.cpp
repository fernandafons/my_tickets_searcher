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
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"


extern "C" {static long slot_Qt_WindowStates___hash__(PyObject *);}
static long slot_Qt_WindowStates___hash__(PyObject *sipSelf)
{
     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator Qt::WindowStates::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_WindowStates___bool__(PyObject *);}
static int slot_Qt_WindowStates___bool__(PyObject *sipSelf)
{
     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::WindowStates::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_WindowStates___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::WindowStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_WindowStates, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::WindowStates::Int() != a0->operator Qt::WindowStates::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"
            sipReleaseType(const_cast< ::Qt::WindowStates *>(a0),sipType_Qt_WindowStates,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_WindowStates, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_WindowStates___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::WindowStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_WindowStates, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::WindowStates::Int() == a0->operator Qt::WindowStates::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"
            sipReleaseType(const_cast< ::Qt::WindowStates *>(a0),sipType_Qt_WindowStates,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_WindowStates, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_WindowStates___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_WindowStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::WindowStates(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"

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


extern "C" {static PyObject *slot_Qt_WindowStates___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::WindowStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_WindowStates, &a0, &a0State, &a1))
        {
             ::Qt::WindowStates*sipRes;

            sipRes = new  ::Qt::WindowStates((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_WindowStates___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_WindowStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::WindowStates(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"

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


extern "C" {static PyObject *slot_Qt_WindowStates___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::WindowStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_WindowStates, &a0, &a0State, &a1))
        {
             ::Qt::WindowStates*sipRes;

            sipRes = new  ::Qt::WindowStates((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_WindowStates___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_WindowStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::WindowStates::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_WindowStates___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::WindowStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_WindowStates, &a0, &a0State, &a1))
        {
             ::Qt::WindowStates*sipRes;

            sipRes = new  ::Qt::WindowStates((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_WindowStates___invert__(PyObject *);}
static PyObject *slot_Qt_WindowStates___invert__(PyObject *sipSelf)
{
     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::Qt::WindowStates*sipRes;

            sipRes = new  ::Qt::WindowStates(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_WindowStates___int__(PyObject *);}
static PyObject *slot_Qt_WindowStates___int__(PyObject *sipSelf)
{
     ::Qt::WindowStates *sipCpp = reinterpret_cast< ::Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

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
extern "C" {static void release_Qt_WindowStates(void *, int);}
static void release_Qt_WindowStates(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::WindowStates *>(sipCppV);
}


extern "C" {static void *array_Qt_WindowStates(Py_ssize_t);}
static void *array_Qt_WindowStates(Py_ssize_t sipNrElem)
{
    return new  ::Qt::WindowStates[sipNrElem];
}


extern "C" {static void assign_Qt_WindowStates(void *, Py_ssize_t, void *);}
static void assign_Qt_WindowStates(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::WindowStates *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::WindowStates *>(sipSrc);
}


extern "C" {static void *copy_Qt_WindowStates(const void *, Py_ssize_t);}
static void *copy_Qt_WindowStates(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::Qt::WindowStates(reinterpret_cast<const  ::Qt::WindowStates *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_WindowStates(sipSimpleWrapper *);}
static void dealloc_Qt_WindowStates(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_WindowStates(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_WindowStates(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_WindowStates(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::WindowStates *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::Qt::WindowStates();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::WindowStates(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::WindowStates* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_Qt_WindowStates, &a0, &a0State))
        {
            sipCpp = new  ::Qt::WindowStates(*a0);
            sipReleaseType(const_cast< ::Qt::WindowStates *>(a0),sipType_Qt_WindowStates,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_Qt_WindowStates(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_WindowStates(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::WindowStates **sipCppPtr = reinterpret_cast< ::Qt::WindowStates **>(sipCppPtrV);

#line 121 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::WindowStates is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_WindowState)) ||
            sipCanConvertToType(sipPy, sipType_Qt_WindowStates, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_WindowState)))
{
    *sipCppPtr = new Qt::WindowStates(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::WindowStates *>(sipConvertToType(sipPy, sipType_Qt_WindowStates, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtWindowStates.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_WindowStates[] = {
    {(void *)slot_Qt_WindowStates___hash__, hash_slot},
    {(void *)slot_Qt_WindowStates___bool__, bool_slot},
    {(void *)slot_Qt_WindowStates___ne__, ne_slot},
    {(void *)slot_Qt_WindowStates___eq__, eq_slot},
    {(void *)slot_Qt_WindowStates___ixor__, ixor_slot},
    {(void *)slot_Qt_WindowStates___xor__, xor_slot},
    {(void *)slot_Qt_WindowStates___ior__, ior_slot},
    {(void *)slot_Qt_WindowStates___or__, or_slot},
    {(void *)slot_Qt_WindowStates___iand__, iand_slot},
    {(void *)slot_Qt_WindowStates___and__, and_slot},
    {(void *)slot_Qt_WindowStates___invert__, invert_slot},
    {(void *)slot_Qt_WindowStates___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_WindowStates, "\1Qt.WindowStates()\n"
"Qt.WindowStates(Union[Qt.WindowStates, Qt.WindowState])\n"
"Qt.WindowStates(Qt.WindowStates)");


static pyqt5ClassPluginDef plugin_Qt_WindowStates = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_Qt_WindowStates = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__WindowStates,
        SIP_NULLPTR,
        &plugin_Qt_WindowStates
    },
    {
        sipNameNr_WindowStates,
        {339, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_Qt_WindowStates,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_Qt_WindowStates,
    init_type_Qt_WindowStates,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_Qt_WindowStates,
    assign_Qt_WindowStates,
    array_Qt_WindowStates,
    copy_Qt_WindowStates,
    release_Qt_WindowStates,
    SIP_NULLPTR,
    convertTo_Qt_WindowStates,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
