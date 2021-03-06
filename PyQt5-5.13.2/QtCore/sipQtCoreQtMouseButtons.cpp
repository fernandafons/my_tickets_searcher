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
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"


extern "C" {static long slot_Qt_MouseButtons___hash__(PyObject *);}
static long slot_Qt_MouseButtons___hash__(PyObject *sipSelf)
{
     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator Qt::MouseButtons::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_MouseButtons___bool__(PyObject *);}
static int slot_Qt_MouseButtons___bool__(PyObject *sipSelf)
{
     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::MouseButtons::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_MouseButtons___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::MouseButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MouseButtons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::MouseButtons::Int() != a0->operator Qt::MouseButtons::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"
            sipReleaseType(const_cast< ::Qt::MouseButtons *>(a0),sipType_Qt_MouseButtons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_MouseButtons, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::Qt::MouseButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MouseButtons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::MouseButtons::Int() == a0->operator Qt::MouseButtons::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"
            sipReleaseType(const_cast< ::Qt::MouseButtons *>(a0),sipType_Qt_MouseButtons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_MouseButtons, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::MouseButtons(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"

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


extern "C" {static PyObject *slot_Qt_MouseButtons___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::MouseButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseButtons, &a0, &a0State, &a1))
        {
             ::Qt::MouseButtons*sipRes;

            sipRes = new  ::Qt::MouseButtons((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = Qt::MouseButtons(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"

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


extern "C" {static PyObject *slot_Qt_MouseButtons___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::MouseButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseButtons, &a0, &a0State, &a1))
        {
             ::Qt::MouseButtons*sipRes;

            sipRes = new  ::Qt::MouseButtons((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::MouseButtons::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_MouseButtons___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::MouseButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseButtons, &a0, &a0State, &a1))
        {
             ::Qt::MouseButtons*sipRes;

            sipRes = new  ::Qt::MouseButtons((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___invert__(PyObject *);}
static PyObject *slot_Qt_MouseButtons___invert__(PyObject *sipSelf)
{
     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::Qt::MouseButtons*sipRes;

            sipRes = new  ::Qt::MouseButtons(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_MouseButtons___int__(PyObject *);}
static PyObject *slot_Qt_MouseButtons___int__(PyObject *sipSelf)
{
     ::Qt::MouseButtons *sipCpp = reinterpret_cast< ::Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

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
extern "C" {static void release_Qt_MouseButtons(void *, int);}
static void release_Qt_MouseButtons(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::MouseButtons *>(sipCppV);
}


extern "C" {static void *array_Qt_MouseButtons(Py_ssize_t);}
static void *array_Qt_MouseButtons(Py_ssize_t sipNrElem)
{
    return new  ::Qt::MouseButtons[sipNrElem];
}


extern "C" {static void assign_Qt_MouseButtons(void *, Py_ssize_t, void *);}
static void assign_Qt_MouseButtons(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::MouseButtons *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::MouseButtons *>(sipSrc);
}


extern "C" {static void *copy_Qt_MouseButtons(const void *, Py_ssize_t);}
static void *copy_Qt_MouseButtons(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::Qt::MouseButtons(reinterpret_cast<const  ::Qt::MouseButtons *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_MouseButtons(sipSimpleWrapper *);}
static void dealloc_Qt_MouseButtons(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_MouseButtons(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_MouseButtons(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_MouseButtons(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::MouseButtons *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::Qt::MouseButtons();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::MouseButtons(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::MouseButtons* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_Qt_MouseButtons, &a0, &a0State))
        {
            sipCpp = new  ::Qt::MouseButtons(*a0);
            sipReleaseType(const_cast< ::Qt::MouseButtons *>(a0),sipType_Qt_MouseButtons,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_Qt_MouseButtons(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_MouseButtons(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::MouseButtons **sipCppPtr = reinterpret_cast< ::Qt::MouseButtons **>(sipCppPtrV);

#line 121 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::MouseButtons is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_MouseButton)) ||
            sipCanConvertToType(sipPy, sipType_Qt_MouseButtons, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_MouseButton)))
{
    *sipCppPtr = new Qt::MouseButtons(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::MouseButtons *>(sipConvertToType(sipPy, sipType_Qt_MouseButtons, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQtMouseButtons.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_MouseButtons[] = {
    {(void *)slot_Qt_MouseButtons___hash__, hash_slot},
    {(void *)slot_Qt_MouseButtons___bool__, bool_slot},
    {(void *)slot_Qt_MouseButtons___ne__, ne_slot},
    {(void *)slot_Qt_MouseButtons___eq__, eq_slot},
    {(void *)slot_Qt_MouseButtons___ixor__, ixor_slot},
    {(void *)slot_Qt_MouseButtons___xor__, xor_slot},
    {(void *)slot_Qt_MouseButtons___ior__, ior_slot},
    {(void *)slot_Qt_MouseButtons___or__, or_slot},
    {(void *)slot_Qt_MouseButtons___iand__, iand_slot},
    {(void *)slot_Qt_MouseButtons___and__, and_slot},
    {(void *)slot_Qt_MouseButtons___invert__, invert_slot},
    {(void *)slot_Qt_MouseButtons___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_MouseButtons, "\1Qt.MouseButtons()\n"
"Qt.MouseButtons(Union[Qt.MouseButtons, Qt.MouseButton])\n"
"Qt.MouseButtons(Qt.MouseButtons)");


static pyqt5ClassPluginDef plugin_Qt_MouseButtons = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_Qt_MouseButtons = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__MouseButtons,
        SIP_NULLPTR,
        &plugin_Qt_MouseButtons
    },
    {
        sipNameNr_MouseButtons,
        {339, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_Qt_MouseButtons,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_Qt_MouseButtons,
    init_type_Qt_MouseButtons,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_Qt_MouseButtons,
    assign_Qt_MouseButtons,
    array_Qt_MouseButtons,
    copy_Qt_MouseButtons,
    release_Qt_MouseButtons,
    SIP_NULLPTR,
    convertTo_Qt_MouseButtons,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
