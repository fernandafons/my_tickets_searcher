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

#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qsslpresharedkeyauthenticator.sip"
#include <qsslpresharedkeyauthenticator.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQSslPreSharedKeyAuthenticator.cpp"

#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQSslPreSharedKeyAuthenticator.cpp"


PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator_swap, "swap(self, QSslPreSharedKeyAuthenticator)");

extern "C" {static PyObject *meth_QSslPreSharedKeyAuthenticator_swap(PyObject *, PyObject *);}
static PyObject *meth_QSslPreSharedKeyAuthenticator_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QSslPreSharedKeyAuthenticator* a0;
         ::QSslPreSharedKeyAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSslPreSharedKeyAuthenticator, &sipCpp, sipType_QSslPreSharedKeyAuthenticator, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslPreSharedKeyAuthenticator, sipName_swap, doc_QSslPreSharedKeyAuthenticator_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator_identityHint, "identityHint(self) -> QByteArray");

extern "C" {static PyObject *meth_QSslPreSharedKeyAuthenticator_identityHint(PyObject *, PyObject *);}
static PyObject *meth_QSslPreSharedKeyAuthenticator_identityHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslPreSharedKeyAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslPreSharedKeyAuthenticator, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->identityHint());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslPreSharedKeyAuthenticator, sipName_identityHint, doc_QSslPreSharedKeyAuthenticator_identityHint);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator_setIdentity, "setIdentity(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QSslPreSharedKeyAuthenticator_setIdentity(PyObject *, PyObject *);}
static PyObject *meth_QSslPreSharedKeyAuthenticator_setIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QSslPreSharedKeyAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSslPreSharedKeyAuthenticator, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setIdentity(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslPreSharedKeyAuthenticator, sipName_setIdentity, doc_QSslPreSharedKeyAuthenticator_setIdentity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator_identity, "identity(self) -> QByteArray");

extern "C" {static PyObject *meth_QSslPreSharedKeyAuthenticator_identity(PyObject *, PyObject *);}
static PyObject *meth_QSslPreSharedKeyAuthenticator_identity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslPreSharedKeyAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslPreSharedKeyAuthenticator, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->identity());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslPreSharedKeyAuthenticator, sipName_identity, doc_QSslPreSharedKeyAuthenticator_identity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator_maximumIdentityLength, "maximumIdentityLength(self) -> int");

extern "C" {static PyObject *meth_QSslPreSharedKeyAuthenticator_maximumIdentityLength(PyObject *, PyObject *);}
static PyObject *meth_QSslPreSharedKeyAuthenticator_maximumIdentityLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslPreSharedKeyAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslPreSharedKeyAuthenticator, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->maximumIdentityLength();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslPreSharedKeyAuthenticator, sipName_maximumIdentityLength, doc_QSslPreSharedKeyAuthenticator_maximumIdentityLength);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator_setPreSharedKey, "setPreSharedKey(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QSslPreSharedKeyAuthenticator_setPreSharedKey(PyObject *, PyObject *);}
static PyObject *meth_QSslPreSharedKeyAuthenticator_setPreSharedKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QSslPreSharedKeyAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSslPreSharedKeyAuthenticator, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setPreSharedKey(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslPreSharedKeyAuthenticator, sipName_setPreSharedKey, doc_QSslPreSharedKeyAuthenticator_setPreSharedKey);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator_preSharedKey, "preSharedKey(self) -> QByteArray");

extern "C" {static PyObject *meth_QSslPreSharedKeyAuthenticator_preSharedKey(PyObject *, PyObject *);}
static PyObject *meth_QSslPreSharedKeyAuthenticator_preSharedKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslPreSharedKeyAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslPreSharedKeyAuthenticator, &sipCpp))
        {
             ::QByteArray*sipRes;

            sipRes = new  ::QByteArray(sipCpp->preSharedKey());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslPreSharedKeyAuthenticator, sipName_preSharedKey, doc_QSslPreSharedKeyAuthenticator_preSharedKey);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength, "maximumPreSharedKeyLength(self) -> int");

extern "C" {static PyObject *meth_QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength(PyObject *, PyObject *);}
static PyObject *meth_QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslPreSharedKeyAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslPreSharedKeyAuthenticator, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->maximumPreSharedKeyLength();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslPreSharedKeyAuthenticator, sipName_maximumPreSharedKeyLength, doc_QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QSslPreSharedKeyAuthenticator___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSslPreSharedKeyAuthenticator___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSslPreSharedKeyAuthenticator *sipCpp = reinterpret_cast< ::QSslPreSharedKeyAuthenticator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslPreSharedKeyAuthenticator));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslPreSharedKeyAuthenticator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslPreSharedKeyAuthenticator, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QSslPreSharedKeyAuthenticator, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSslPreSharedKeyAuthenticator___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSslPreSharedKeyAuthenticator___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSslPreSharedKeyAuthenticator *sipCpp = reinterpret_cast< ::QSslPreSharedKeyAuthenticator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslPreSharedKeyAuthenticator));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslPreSharedKeyAuthenticator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslPreSharedKeyAuthenticator, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QSslPreSharedKeyAuthenticator, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSslPreSharedKeyAuthenticator(void *, int);}
static void release_QSslPreSharedKeyAuthenticator(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSslPreSharedKeyAuthenticator *>(sipCppV);
}


extern "C" {static void *array_QSslPreSharedKeyAuthenticator(Py_ssize_t);}
static void *array_QSslPreSharedKeyAuthenticator(Py_ssize_t sipNrElem)
{
    return new  ::QSslPreSharedKeyAuthenticator[sipNrElem];
}


extern "C" {static void assign_QSslPreSharedKeyAuthenticator(void *, Py_ssize_t, void *);}
static void assign_QSslPreSharedKeyAuthenticator(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSslPreSharedKeyAuthenticator *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSslPreSharedKeyAuthenticator *>(sipSrc);
}


extern "C" {static void *copy_QSslPreSharedKeyAuthenticator(const void *, Py_ssize_t);}
static void *copy_QSslPreSharedKeyAuthenticator(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QSslPreSharedKeyAuthenticator(reinterpret_cast<const  ::QSslPreSharedKeyAuthenticator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSslPreSharedKeyAuthenticator(sipSimpleWrapper *);}
static void dealloc_QSslPreSharedKeyAuthenticator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSslPreSharedKeyAuthenticator(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSslPreSharedKeyAuthenticator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSslPreSharedKeyAuthenticator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSslPreSharedKeyAuthenticator *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QSslPreSharedKeyAuthenticator();

            return sipCpp;
        }
    }

    {
        const  ::QSslPreSharedKeyAuthenticator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QSslPreSharedKeyAuthenticator, &a0))
        {
            sipCpp = new  ::QSslPreSharedKeyAuthenticator(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSslPreSharedKeyAuthenticator[] = {
    {(void *)slot_QSslPreSharedKeyAuthenticator___eq__, eq_slot},
    {(void *)slot_QSslPreSharedKeyAuthenticator___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSslPreSharedKeyAuthenticator[] = {
    {sipName_identity, meth_QSslPreSharedKeyAuthenticator_identity, METH_VARARGS, doc_QSslPreSharedKeyAuthenticator_identity},
    {sipName_identityHint, meth_QSslPreSharedKeyAuthenticator_identityHint, METH_VARARGS, doc_QSslPreSharedKeyAuthenticator_identityHint},
    {sipName_maximumIdentityLength, meth_QSslPreSharedKeyAuthenticator_maximumIdentityLength, METH_VARARGS, doc_QSslPreSharedKeyAuthenticator_maximumIdentityLength},
    {sipName_maximumPreSharedKeyLength, meth_QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength, METH_VARARGS, doc_QSslPreSharedKeyAuthenticator_maximumPreSharedKeyLength},
    {sipName_preSharedKey, meth_QSslPreSharedKeyAuthenticator_preSharedKey, METH_VARARGS, doc_QSslPreSharedKeyAuthenticator_preSharedKey},
    {sipName_setIdentity, meth_QSslPreSharedKeyAuthenticator_setIdentity, METH_VARARGS, doc_QSslPreSharedKeyAuthenticator_setIdentity},
    {sipName_setPreSharedKey, meth_QSslPreSharedKeyAuthenticator_setPreSharedKey, METH_VARARGS, doc_QSslPreSharedKeyAuthenticator_setPreSharedKey},
    {sipName_swap, meth_QSslPreSharedKeyAuthenticator_swap, METH_VARARGS, doc_QSslPreSharedKeyAuthenticator_swap}
};

PyDoc_STRVAR(doc_QSslPreSharedKeyAuthenticator, "\1QSslPreSharedKeyAuthenticator()\n"
"QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator)");


static pyqt5ClassPluginDef plugin_QSslPreSharedKeyAuthenticator = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QSslPreSharedKeyAuthenticator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSslPreSharedKeyAuthenticator,
        SIP_NULLPTR,
        &plugin_QSslPreSharedKeyAuthenticator
    },
    {
        sipNameNr_QSslPreSharedKeyAuthenticator,
        {0, 0, 1},
        8, methods_QSslPreSharedKeyAuthenticator,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QSslPreSharedKeyAuthenticator,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QSslPreSharedKeyAuthenticator,
    init_type_QSslPreSharedKeyAuthenticator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QSslPreSharedKeyAuthenticator,
    assign_QSslPreSharedKeyAuthenticator,
    array_QSslPreSharedKeyAuthenticator,
    copy_QSslPreSharedKeyAuthenticator,
    release_QSslPreSharedKeyAuthenticator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};