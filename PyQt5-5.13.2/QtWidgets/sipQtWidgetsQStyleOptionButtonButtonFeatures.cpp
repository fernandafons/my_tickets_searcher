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

#line 350 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"

#line 350 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"


extern "C" {static long slot_QStyleOptionButton_ButtonFeatures___hash__(PyObject *);}
static long slot_QStyleOptionButton_ButtonFeatures___hash__(PyObject *sipSelf)
{
     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QStyleOptionButton::ButtonFeatures::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QStyleOptionButton_ButtonFeatures___bool__(PyObject *);}
static int slot_QStyleOptionButton_ButtonFeatures___bool__(PyObject *sipSelf)
{
     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionButton::ButtonFeatures::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionButton::ButtonFeatures::Int() != a0->operator QStyleOptionButton::ButtonFeatures::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"
            sipReleaseType(const_cast< ::QStyleOptionButton::ButtonFeatures *>(a0),sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QStyleOptionButton_ButtonFeatures, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionButton::ButtonFeatures::Int() == a0->operator QStyleOptionButton::ButtonFeatures::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"
            sipReleaseType(const_cast< ::QStyleOptionButton::ButtonFeatures *>(a0),sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QStyleOptionButton_ButtonFeatures, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QStyleOptionButton::ButtonFeatures(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"

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


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State, &a1))
        {
             ::QStyleOptionButton::ButtonFeatures*sipRes;

            sipRes = new  ::QStyleOptionButton::ButtonFeatures((*a0 ^ a1));
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QStyleOptionButton::ButtonFeatures(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"

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


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State, &a1))
        {
             ::QStyleOptionButton::ButtonFeatures*sipRes;

            sipRes = new  ::QStyleOptionButton::ButtonFeatures((*a0 | a1));
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QStyleOptionButton::ButtonFeatures::operator&=(a0);

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


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State, &a1))
        {
             ::QStyleOptionButton::ButtonFeatures*sipRes;

            sipRes = new  ::QStyleOptionButton::ButtonFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___invert__(PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___invert__(PyObject *sipSelf)
{
     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QStyleOptionButton::ButtonFeatures*sipRes;

            sipRes = new  ::QStyleOptionButton::ButtonFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___int__(PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___int__(PyObject *sipSelf)
{
     ::QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

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
extern "C" {static void release_QStyleOptionButton_ButtonFeatures(void *, int);}
static void release_QStyleOptionButton_ButtonFeatures(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipCppV);
}


extern "C" {static void *array_QStyleOptionButton_ButtonFeatures(Py_ssize_t);}
static void *array_QStyleOptionButton_ButtonFeatures(Py_ssize_t sipNrElem)
{
    return new  ::QStyleOptionButton::ButtonFeatures[sipNrElem];
}


extern "C" {static void assign_QStyleOptionButton_ButtonFeatures(void *, Py_ssize_t, void *);}
static void assign_QStyleOptionButton_ButtonFeatures(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionButton::ButtonFeatures *>(sipSrc);
}


extern "C" {static void *copy_QStyleOptionButton_ButtonFeatures(const void *, Py_ssize_t);}
static void *copy_QStyleOptionButton_ButtonFeatures(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleOptionButton::ButtonFeatures(reinterpret_cast<const  ::QStyleOptionButton::ButtonFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionButton_ButtonFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionButton_ButtonFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionButton_ButtonFeatures(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionButton_ButtonFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionButton_ButtonFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionButton::ButtonFeatures *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionButton::ButtonFeatures();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QStyleOptionButton::ButtonFeatures(a0);

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State))
        {
            sipCpp = new  ::QStyleOptionButton::ButtonFeatures(*a0);
            sipReleaseType(const_cast< ::QStyleOptionButton::ButtonFeatures *>(a0),sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QStyleOptionButton_ButtonFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionButton_ButtonFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QStyleOptionButton::ButtonFeatures **sipCppPtr = reinterpret_cast< ::QStyleOptionButton::ButtonFeatures **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionButton::ButtonFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionButton_ButtonFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeature)))
{
    *sipCppPtr = new QStyleOptionButton::ButtonFeatures(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionButton_ButtonFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionButtonButtonFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionButton_ButtonFeatures[] = {
    {(void *)slot_QStyleOptionButton_ButtonFeatures___hash__, hash_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___iand__, iand_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionButton_ButtonFeatures, "\1QStyleOptionButton.ButtonFeatures()\n"
"QStyleOptionButton.ButtonFeatures(Union[QStyleOptionButton.ButtonFeatures, QStyleOptionButton.ButtonFeature])\n"
"QStyleOptionButton.ButtonFeatures(QStyleOptionButton.ButtonFeatures)");


static pyqt5ClassPluginDef plugin_QStyleOptionButton_ButtonFeatures = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionButton_ButtonFeatures = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionButton__ButtonFeatures,
        SIP_NULLPTR,
        &plugin_QStyleOptionButton_ButtonFeatures
    },
    {
        sipNameNr_ButtonFeatures,
        {316, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleOptionButton_ButtonFeatures,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QStyleOptionButton_ButtonFeatures,
    init_type_QStyleOptionButton_ButtonFeatures,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleOptionButton_ButtonFeatures,
    assign_QStyleOptionButton_ButtonFeatures,
    array_QStyleOptionButton_ButtonFeatures,
    copy_QStyleOptionButton_ButtonFeatures,
    release_QStyleOptionButton_ButtonFeatures,
    SIP_NULLPTR,
    convertTo_QStyleOptionButton_ButtonFeatures,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
