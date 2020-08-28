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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextboundaryfinder.sip"
#include <qtextboundaryfinder.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qtextboundaryfinder.sip"
#include <qtextboundaryfinder.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"


extern "C" {static long slot_QTextBoundaryFinder_BoundaryReasons___hash__(PyObject *);}
static long slot_QTextBoundaryFinder_BoundaryReasons___hash__(PyObject *sipSelf)
{
     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QTextBoundaryFinder::BoundaryReasons::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QTextBoundaryFinder_BoundaryReasons___bool__(PyObject *);}
static int slot_QTextBoundaryFinder_BoundaryReasons___bool__(PyObject *sipSelf)
{
     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextBoundaryFinder::BoundaryReasons::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextBoundaryFinder::BoundaryReasons::Int() != a0->operator QTextBoundaryFinder::BoundaryReasons::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"
            sipReleaseType(const_cast< ::QTextBoundaryFinder::BoundaryReasons *>(a0),sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QTextBoundaryFinder_BoundaryReasons, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextBoundaryFinder::BoundaryReasons::Int() == a0->operator QTextBoundaryFinder::BoundaryReasons::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"
            sipReleaseType(const_cast< ::QTextBoundaryFinder::BoundaryReasons *>(a0),sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QTextBoundaryFinder_BoundaryReasons, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReasons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = QTextBoundaryFinder::BoundaryReasons(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"

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


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State, &a1))
        {
             ::QTextBoundaryFinder::BoundaryReasons*sipRes;

            sipRes = new  ::QTextBoundaryFinder::BoundaryReasons((*a0 ^ a1));
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReasons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = QTextBoundaryFinder::BoundaryReasons(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"

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


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State, &a1))
        {
             ::QTextBoundaryFinder::BoundaryReasons*sipRes;

            sipRes = new  ::QTextBoundaryFinder::BoundaryReasons((*a0 | a1));
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReasons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QTextBoundaryFinder::BoundaryReasons::operator&=(a0);

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


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State, &a1))
        {
             ::QTextBoundaryFinder::BoundaryReasons*sipRes;

            sipRes = new  ::QTextBoundaryFinder::BoundaryReasons((*a0 & a1));
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___invert__(PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___invert__(PyObject *sipSelf)
{
     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QTextBoundaryFinder::BoundaryReasons*sipRes;

            sipRes = new  ::QTextBoundaryFinder::BoundaryReasons(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___int__(PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___int__(PyObject *sipSelf)
{
     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

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
extern "C" {static void release_QTextBoundaryFinder_BoundaryReasons(void *, int);}
static void release_QTextBoundaryFinder_BoundaryReasons(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipCppV);
}


extern "C" {static void *array_QTextBoundaryFinder_BoundaryReasons(Py_ssize_t);}
static void *array_QTextBoundaryFinder_BoundaryReasons(Py_ssize_t sipNrElem)
{
    return new  ::QTextBoundaryFinder::BoundaryReasons[sipNrElem];
}


extern "C" {static void assign_QTextBoundaryFinder_BoundaryReasons(void *, Py_ssize_t, void *);}
static void assign_QTextBoundaryFinder_BoundaryReasons(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons *>(sipSrc);
}


extern "C" {static void *copy_QTextBoundaryFinder_BoundaryReasons(const void *, Py_ssize_t);}
static void *copy_QTextBoundaryFinder_BoundaryReasons(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QTextBoundaryFinder::BoundaryReasons(reinterpret_cast<const  ::QTextBoundaryFinder::BoundaryReasons *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBoundaryFinder_BoundaryReasons(sipSimpleWrapper *);}
static void dealloc_QTextBoundaryFinder_BoundaryReasons(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextBoundaryFinder_BoundaryReasons(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTextBoundaryFinder_BoundaryReasons(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBoundaryFinder_BoundaryReasons(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTextBoundaryFinder::BoundaryReasons *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QTextBoundaryFinder::BoundaryReasons();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QTextBoundaryFinder::BoundaryReasons(a0);

            return sipCpp;
        }
    }

    {
        const  ::QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State))
        {
            sipCpp = new  ::QTextBoundaryFinder::BoundaryReasons(*a0);
            sipReleaseType(const_cast< ::QTextBoundaryFinder::BoundaryReasons *>(a0),sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QTextBoundaryFinder_BoundaryReasons(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextBoundaryFinder_BoundaryReasons(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QTextBoundaryFinder::BoundaryReasons **sipCppPtr = reinterpret_cast< ::QTextBoundaryFinder::BoundaryReasons **>(sipCppPtrV);

#line 121 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextBoundaryFinder::BoundaryReasons is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReason)) ||
            sipCanConvertToType(sipPy, sipType_QTextBoundaryFinder_BoundaryReasons, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReason)))
{
    *sipCppPtr = new QTextBoundaryFinder::BoundaryReasons(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipConvertToType(sipPy, sipType_QTextBoundaryFinder_BoundaryReasons, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextBoundaryFinder_BoundaryReasons[] = {
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___hash__, hash_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___bool__, bool_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___ne__, ne_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___eq__, eq_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___ixor__, ixor_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___xor__, xor_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___ior__, ior_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___or__, or_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___iand__, iand_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___and__, and_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___invert__, invert_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextBoundaryFinder_BoundaryReasons, "\1QTextBoundaryFinder.BoundaryReasons()\n"
"QTextBoundaryFinder.BoundaryReasons(Union[QTextBoundaryFinder.BoundaryReasons, QTextBoundaryFinder.BoundaryReason])\n"
"QTextBoundaryFinder.BoundaryReasons(QTextBoundaryFinder.BoundaryReasons)");


static pyqt5ClassPluginDef plugin_QTextBoundaryFinder_BoundaryReasons = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QTextBoundaryFinder_BoundaryReasons = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextBoundaryFinder__BoundaryReasons,
        SIP_NULLPTR,
        &plugin_QTextBoundaryFinder_BoundaryReasons
    },
    {
        sipNameNr_BoundaryReasons,
        {267, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTextBoundaryFinder_BoundaryReasons,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QTextBoundaryFinder_BoundaryReasons,
    init_type_QTextBoundaryFinder_BoundaryReasons,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTextBoundaryFinder_BoundaryReasons,
    assign_QTextBoundaryFinder_BoundaryReasons,
    array_QTextBoundaryFinder_BoundaryReasons,
    copy_QTextBoundaryFinder_BoundaryReasons,
    release_QTextBoundaryFinder_BoundaryReasons,
    SIP_NULLPTR,
    convertTo_QTextBoundaryFinder_BoundaryReasons,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};