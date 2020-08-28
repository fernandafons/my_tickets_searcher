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

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qsslcertificateextension.sip"
#include <qsslcertificateextension.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQSslCertificateExtension.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQSslCertificateExtension.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQSslCertificateExtension.cpp"


PyDoc_STRVAR(doc_QSslCertificateExtension_swap, "swap(self, QSslCertificateExtension)");

extern "C" {static PyObject *meth_QSslCertificateExtension_swap(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificateExtension_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QSslCertificateExtension* a0;
         ::QSslCertificateExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSslCertificateExtension, &sipCpp, sipType_QSslCertificateExtension, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslCertificateExtension, sipName_swap, doc_QSslCertificateExtension_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslCertificateExtension_oid, "oid(self) -> str");

extern "C" {static PyObject *meth_QSslCertificateExtension_oid(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificateExtension_oid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslCertificateExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificateExtension, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->oid());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslCertificateExtension, sipName_oid, doc_QSslCertificateExtension_oid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslCertificateExtension_name, "name(self) -> str");

extern "C" {static PyObject *meth_QSslCertificateExtension_name(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificateExtension_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslCertificateExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificateExtension, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslCertificateExtension, sipName_name, doc_QSslCertificateExtension_name);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslCertificateExtension_value, "value(self) -> Any");

extern "C" {static PyObject *meth_QSslCertificateExtension_value(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificateExtension_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslCertificateExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificateExtension, &sipCpp))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->value());

            return sipConvertFromNewType(sipRes,sipType_QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslCertificateExtension, sipName_value, doc_QSslCertificateExtension_value);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslCertificateExtension_isCritical, "isCritical(self) -> bool");

extern "C" {static PyObject *meth_QSslCertificateExtension_isCritical(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificateExtension_isCritical(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslCertificateExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificateExtension, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCritical();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslCertificateExtension, sipName_isCritical, doc_QSslCertificateExtension_isCritical);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSslCertificateExtension_isSupported, "isSupported(self) -> bool");

extern "C" {static PyObject *meth_QSslCertificateExtension_isSupported(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificateExtension_isSupported(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSslCertificateExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificateExtension, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSupported();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSslCertificateExtension, sipName_isSupported, doc_QSslCertificateExtension_isSupported);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSslCertificateExtension(void *, int);}
static void release_QSslCertificateExtension(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSslCertificateExtension *>(sipCppV);
}


extern "C" {static void *array_QSslCertificateExtension(Py_ssize_t);}
static void *array_QSslCertificateExtension(Py_ssize_t sipNrElem)
{
    return new  ::QSslCertificateExtension[sipNrElem];
}


extern "C" {static void assign_QSslCertificateExtension(void *, Py_ssize_t, void *);}
static void assign_QSslCertificateExtension(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSslCertificateExtension *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSslCertificateExtension *>(sipSrc);
}


extern "C" {static void *copy_QSslCertificateExtension(const void *, Py_ssize_t);}
static void *copy_QSslCertificateExtension(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QSslCertificateExtension(reinterpret_cast<const  ::QSslCertificateExtension *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSslCertificateExtension(sipSimpleWrapper *);}
static void dealloc_QSslCertificateExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSslCertificateExtension(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSslCertificateExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSslCertificateExtension(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSslCertificateExtension *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QSslCertificateExtension();

            return sipCpp;
        }
    }

    {
        const  ::QSslCertificateExtension* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QSslCertificateExtension, &a0))
        {
            sipCpp = new  ::QSslCertificateExtension(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QSslCertificateExtension[] = {
    {sipName_isCritical, meth_QSslCertificateExtension_isCritical, METH_VARARGS, doc_QSslCertificateExtension_isCritical},
    {sipName_isSupported, meth_QSslCertificateExtension_isSupported, METH_VARARGS, doc_QSslCertificateExtension_isSupported},
    {sipName_name, meth_QSslCertificateExtension_name, METH_VARARGS, doc_QSslCertificateExtension_name},
    {sipName_oid, meth_QSslCertificateExtension_oid, METH_VARARGS, doc_QSslCertificateExtension_oid},
    {sipName_swap, meth_QSslCertificateExtension_swap, METH_VARARGS, doc_QSslCertificateExtension_swap},
    {sipName_value, meth_QSslCertificateExtension_value, METH_VARARGS, doc_QSslCertificateExtension_value}
};

PyDoc_STRVAR(doc_QSslCertificateExtension, "\1QSslCertificateExtension()\n"
"QSslCertificateExtension(QSslCertificateExtension)");


static pyqt5ClassPluginDef plugin_QSslCertificateExtension = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QSslCertificateExtension = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSslCertificateExtension,
        SIP_NULLPTR,
        &plugin_QSslCertificateExtension
    },
    {
        sipNameNr_QSslCertificateExtension,
        {0, 0, 1},
        6, methods_QSslCertificateExtension,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QSslCertificateExtension,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QSslCertificateExtension,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QSslCertificateExtension,
    assign_QSslCertificateExtension,
    array_QSslCertificateExtension,
    copy_QSslCertificateExtension,
    release_QSslCertificateExtension,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};