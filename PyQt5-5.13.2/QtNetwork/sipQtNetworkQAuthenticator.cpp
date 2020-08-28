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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qauthenticator.sip"
#include <qauthenticator.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQAuthenticator.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQAuthenticator.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQAuthenticator.cpp"
#line 27 "sip/QtCore/qpycore_qhash.sip"
#include <qhash.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQAuthenticator.cpp"


PyDoc_STRVAR(doc_QAuthenticator_user, "user(self) -> str");

extern "C" {static PyObject *meth_QAuthenticator_user(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_user(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->user());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_user, doc_QAuthenticator_user);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QAuthenticator_setUser, "setUser(self, str)");

extern "C" {static PyObject *meth_QAuthenticator_setUser(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_setUser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAuthenticator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setUser(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_setUser, doc_QAuthenticator_setUser);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QAuthenticator_password, "password(self) -> str");

extern "C" {static PyObject *meth_QAuthenticator_password(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_password(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->password());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_password, doc_QAuthenticator_password);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QAuthenticator_setPassword, "setPassword(self, str)");

extern "C" {static PyObject *meth_QAuthenticator_setPassword(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_setPassword(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAuthenticator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setPassword(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_setPassword, doc_QAuthenticator_setPassword);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QAuthenticator_realm, "realm(self) -> str");

extern "C" {static PyObject *meth_QAuthenticator_realm(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_realm(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->realm());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_realm, doc_QAuthenticator_realm);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QAuthenticator_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QAuthenticator_isNull(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_isNull, doc_QAuthenticator_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QAuthenticator_option, "option(self, str) -> Any");

extern "C" {static PyObject *meth_QAuthenticator_option(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_option(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAuthenticator, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->option(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_option, doc_QAuthenticator_option);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QAuthenticator_options, "options(self) -> Dict[str, Any]");

extern "C" {static PyObject *meth_QAuthenticator_options(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_options(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
             ::QVariantHash*sipRes;

            sipRes = new  ::QVariantHash(sipCpp->options());

            return sipConvertFromNewType(sipRes,sipType_QHash_0100QString_0100QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_options, doc_QAuthenticator_options);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QAuthenticator_setOption, "setOption(self, str, Any)");

extern "C" {static PyObject *meth_QAuthenticator_setOption(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_setOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QVariant* a1;
        int a1State = 0;
         ::QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QAuthenticator, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setOption(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_setOption, doc_QAuthenticator_setOption);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QAuthenticator___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAuthenticator___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAuthenticator *sipCpp = reinterpret_cast< ::QAuthenticator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAuthenticator));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAuthenticator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAuthenticator, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QAuthenticator::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QAuthenticator, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAuthenticator___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAuthenticator___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAuthenticator *sipCpp = reinterpret_cast< ::QAuthenticator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAuthenticator));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAuthenticator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAuthenticator, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QAuthenticator::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QAuthenticator, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QAuthenticator(void *, int);}
static void release_QAuthenticator(void *sipCppV, int)
{
    delete reinterpret_cast< ::QAuthenticator *>(sipCppV);
}


extern "C" {static void *array_QAuthenticator(Py_ssize_t);}
static void *array_QAuthenticator(Py_ssize_t sipNrElem)
{
    return new  ::QAuthenticator[sipNrElem];
}


extern "C" {static void assign_QAuthenticator(void *, Py_ssize_t, void *);}
static void assign_QAuthenticator(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QAuthenticator *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QAuthenticator *>(sipSrc);
}


extern "C" {static void *copy_QAuthenticator(const void *, Py_ssize_t);}
static void *copy_QAuthenticator(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QAuthenticator(reinterpret_cast<const  ::QAuthenticator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAuthenticator(sipSimpleWrapper *);}
static void dealloc_QAuthenticator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAuthenticator(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QAuthenticator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAuthenticator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QAuthenticator *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QAuthenticator();

            return sipCpp;
        }
    }

    {
        const  ::QAuthenticator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QAuthenticator, &a0))
        {
            sipCpp = new  ::QAuthenticator(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAuthenticator[] = {
    {(void *)slot_QAuthenticator___ne__, ne_slot},
    {(void *)slot_QAuthenticator___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QAuthenticator[] = {
    {sipName_isNull, meth_QAuthenticator_isNull, METH_VARARGS, doc_QAuthenticator_isNull},
    {sipName_option, meth_QAuthenticator_option, METH_VARARGS, doc_QAuthenticator_option},
    {sipName_options, meth_QAuthenticator_options, METH_VARARGS, doc_QAuthenticator_options},
    {sipName_password, meth_QAuthenticator_password, METH_VARARGS, doc_QAuthenticator_password},
    {sipName_realm, meth_QAuthenticator_realm, METH_VARARGS, doc_QAuthenticator_realm},
    {sipName_setOption, meth_QAuthenticator_setOption, METH_VARARGS, doc_QAuthenticator_setOption},
    {sipName_setPassword, meth_QAuthenticator_setPassword, METH_VARARGS, doc_QAuthenticator_setPassword},
    {sipName_setUser, meth_QAuthenticator_setUser, METH_VARARGS, doc_QAuthenticator_setUser},
    {sipName_user, meth_QAuthenticator_user, METH_VARARGS, doc_QAuthenticator_user}
};

PyDoc_STRVAR(doc_QAuthenticator, "\1QAuthenticator()\n"
"QAuthenticator(QAuthenticator)");


static pyqt5ClassPluginDef plugin_QAuthenticator = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QAuthenticator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QAuthenticator,
        SIP_NULLPTR,
        &plugin_QAuthenticator
    },
    {
        sipNameNr_QAuthenticator,
        {0, 0, 1},
        9, methods_QAuthenticator,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QAuthenticator,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QAuthenticator,
    init_type_QAuthenticator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QAuthenticator,
    assign_QAuthenticator,
    array_QAuthenticator,
    copy_QAuthenticator,
    release_QAuthenticator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
