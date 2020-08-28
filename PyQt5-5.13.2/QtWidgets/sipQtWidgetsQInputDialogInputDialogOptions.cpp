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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qinputdialog.sip"
#include <qinputdialog.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qinputdialog.sip"
#include <qinputdialog.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"


extern "C" {static long slot_QInputDialog_InputDialogOptions___hash__(PyObject *);}
static long slot_QInputDialog_InputDialogOptions___hash__(PyObject *sipSelf)
{
     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QInputDialog::InputDialogOptions::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QInputDialog_InputDialogOptions___bool__(PyObject *);}
static int slot_QInputDialog_InputDialogOptions___bool__(PyObject *sipSelf)
{
     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() != a0->operator QInputDialog::InputDialogOptions::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"
            sipReleaseType(const_cast< ::QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QInputDialog_InputDialogOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() == a0->operator QInputDialog::InputDialogOptions::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"
            sipReleaseType(const_cast< ::QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QInputDialog_InputDialogOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QInputDialog::InputDialogOptions(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"

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


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
             ::QInputDialog::InputDialogOptions*sipRes;

            sipRes = new  ::QInputDialog::InputDialogOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QInputDialog::InputDialogOptions(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"

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


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
             ::QInputDialog::InputDialogOptions*sipRes;

            sipRes = new  ::QInputDialog::InputDialogOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QInputDialog::InputDialogOptions::operator&=(a0);

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


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
             ::QInputDialog::InputDialogOptions*sipRes;

            sipRes = new  ::QInputDialog::InputDialogOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___invert__(PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___invert__(PyObject *sipSelf)
{
     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QInputDialog::InputDialogOptions*sipRes;

            sipRes = new  ::QInputDialog::InputDialogOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___int__(PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___int__(PyObject *sipSelf)
{
     ::QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

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
extern "C" {static void release_QInputDialog_InputDialogOptions(void *, int);}
static void release_QInputDialog_InputDialogOptions(void *sipCppV, int)
{
    delete reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipCppV);
}


extern "C" {static void *array_QInputDialog_InputDialogOptions(Py_ssize_t);}
static void *array_QInputDialog_InputDialogOptions(Py_ssize_t sipNrElem)
{
    return new  ::QInputDialog::InputDialogOptions[sipNrElem];
}


extern "C" {static void assign_QInputDialog_InputDialogOptions(void *, Py_ssize_t, void *);}
static void assign_QInputDialog_InputDialogOptions(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QInputDialog::InputDialogOptions *>(sipSrc);
}


extern "C" {static void *copy_QInputDialog_InputDialogOptions(const void *, Py_ssize_t);}
static void *copy_QInputDialog_InputDialogOptions(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QInputDialog::InputDialogOptions(reinterpret_cast<const  ::QInputDialog::InputDialogOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QInputDialog_InputDialogOptions(sipSimpleWrapper *);}
static void dealloc_QInputDialog_InputDialogOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QInputDialog_InputDialogOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QInputDialog_InputDialogOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QInputDialog_InputDialogOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QInputDialog::InputDialogOptions *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QInputDialog::InputDialogOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QInputDialog::InputDialogOptions(a0);

            return sipCpp;
        }
    }

    {
        const  ::QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            sipCpp = new  ::QInputDialog::InputDialogOptions(*a0);
            sipReleaseType(const_cast< ::QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QInputDialog_InputDialogOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QInputDialog_InputDialogOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QInputDialog::InputDialogOptions **sipCppPtr = reinterpret_cast< ::QInputDialog::InputDialogOptions **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QInputDialog::InputDialogOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOption)) ||
            sipCanConvertToType(sipPy, sipType_QInputDialog_InputDialogOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOption)))
{
    *sipCppPtr = new QInputDialog::InputDialogOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipConvertToType(sipPy, sipType_QInputDialog_InputDialogOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QInputDialog_InputDialogOptions[] = {
    {(void *)slot_QInputDialog_InputDialogOptions___hash__, hash_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___bool__, bool_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ne__, ne_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___eq__, eq_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ixor__, ixor_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___xor__, xor_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ior__, ior_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___or__, or_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___iand__, iand_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___and__, and_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___invert__, invert_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QInputDialog_InputDialogOptions, "\1QInputDialog.InputDialogOptions()\n"
"QInputDialog.InputDialogOptions(Union[QInputDialog.InputDialogOptions, QInputDialog.InputDialogOption])\n"
"QInputDialog.InputDialogOptions(QInputDialog.InputDialogOptions)");


static pyqt5ClassPluginDef plugin_QInputDialog_InputDialogOptions = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QInputDialog_InputDialogOptions = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QInputDialog__InputDialogOptions,
        SIP_NULLPTR,
        &plugin_QInputDialog_InputDialogOptions
    },
    {
        sipNameNr_InputDialogOptions,
        {175, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QInputDialog_InputDialogOptions,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QInputDialog_InputDialogOptions,
    init_type_QInputDialog_InputDialogOptions,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QInputDialog_InputDialogOptions,
    assign_QInputDialog_InputDialogOptions,
    array_QInputDialog_InputDialogOptions,
    copy_QInputDialog_InputDialogOptions,
    release_QInputDialog_InputDialogOptions,
    SIP_NULLPTR,
    convertTo_QInputDialog_InputDialogOptions,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};