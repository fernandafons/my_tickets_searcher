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

#line 189 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatchIterator.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatchIterator.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatchIterator.cpp"
#line 158 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatchIterator.cpp"


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_swap, "swap(self, QRegularExpressionMatchIterator)");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_swap(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QRegularExpressionMatchIterator* a0;
         ::QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp, sipType_QRegularExpressionMatchIterator, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_swap, doc_QRegularExpressionMatchIterator_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_isValid(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_isValid, doc_QRegularExpressionMatchIterator_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_hasNext, "hasNext(self) -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_hasNext(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasNext();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_hasNext, doc_QRegularExpressionMatchIterator_hasNext);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_next, "next(self) -> QRegularExpressionMatch");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_next(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
             ::QRegularExpressionMatch*sipRes;

            sipRes = new  ::QRegularExpressionMatch(sipCpp->next());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpressionMatch,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_next, doc_QRegularExpressionMatchIterator_next);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_peekNext, "peekNext(self) -> QRegularExpressionMatch");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_peekNext(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_peekNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
             ::QRegularExpressionMatch*sipRes;

            sipRes = new  ::QRegularExpressionMatch(sipCpp->peekNext());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpressionMatch,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_peekNext, doc_QRegularExpressionMatchIterator_peekNext);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_regularExpression, "regularExpression(self) -> QRegularExpression");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_regularExpression(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_regularExpression(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
             ::QRegularExpression*sipRes;

            sipRes = new  ::QRegularExpression(sipCpp->regularExpression());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_regularExpression, doc_QRegularExpressionMatchIterator_regularExpression);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_matchType, "matchType(self) -> QRegularExpression.MatchType");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_matchType(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_matchType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
             ::QRegularExpression::MatchType sipRes;

            sipRes = sipCpp->matchType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QRegularExpression_MatchType);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_matchType, doc_QRegularExpressionMatchIterator_matchType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_matchOptions, "matchOptions(self) -> QRegularExpression.MatchOptions");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_matchOptions(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_matchOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
             ::QRegularExpression::MatchOptions*sipRes;

            sipRes = new  ::QRegularExpression::MatchOptions(sipCpp->matchOptions());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_MatchOptions,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_matchOptions, doc_QRegularExpressionMatchIterator_matchOptions);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegularExpressionMatchIterator(void *, int);}
static void release_QRegularExpressionMatchIterator(void *sipCppV, int)
{
    delete reinterpret_cast< ::QRegularExpressionMatchIterator *>(sipCppV);
}


extern "C" {static void *array_QRegularExpressionMatchIterator(Py_ssize_t);}
static void *array_QRegularExpressionMatchIterator(Py_ssize_t sipNrElem)
{
    return new  ::QRegularExpressionMatchIterator[sipNrElem];
}


extern "C" {static void assign_QRegularExpressionMatchIterator(void *, Py_ssize_t, void *);}
static void assign_QRegularExpressionMatchIterator(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QRegularExpressionMatchIterator *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QRegularExpressionMatchIterator *>(sipSrc);
}


extern "C" {static void *copy_QRegularExpressionMatchIterator(const void *, Py_ssize_t);}
static void *copy_QRegularExpressionMatchIterator(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QRegularExpressionMatchIterator(reinterpret_cast<const  ::QRegularExpressionMatchIterator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegularExpressionMatchIterator(sipSimpleWrapper *);}
static void dealloc_QRegularExpressionMatchIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRegularExpressionMatchIterator(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRegularExpressionMatchIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpressionMatchIterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRegularExpressionMatchIterator *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QRegularExpressionMatchIterator();

            return sipCpp;
        }
    }

    {
        const  ::QRegularExpressionMatchIterator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QRegularExpressionMatchIterator, &a0))
        {
            sipCpp = new  ::QRegularExpressionMatchIterator(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QRegularExpressionMatchIterator[] = {
    {sipName_hasNext, meth_QRegularExpressionMatchIterator_hasNext, METH_VARARGS, doc_QRegularExpressionMatchIterator_hasNext},
    {sipName_isValid, meth_QRegularExpressionMatchIterator_isValid, METH_VARARGS, doc_QRegularExpressionMatchIterator_isValid},
    {sipName_matchOptions, meth_QRegularExpressionMatchIterator_matchOptions, METH_VARARGS, doc_QRegularExpressionMatchIterator_matchOptions},
    {sipName_matchType, meth_QRegularExpressionMatchIterator_matchType, METH_VARARGS, doc_QRegularExpressionMatchIterator_matchType},
    {sipName_next, meth_QRegularExpressionMatchIterator_next, METH_VARARGS, doc_QRegularExpressionMatchIterator_next},
    {sipName_peekNext, meth_QRegularExpressionMatchIterator_peekNext, METH_VARARGS, doc_QRegularExpressionMatchIterator_peekNext},
    {sipName_regularExpression, meth_QRegularExpressionMatchIterator_regularExpression, METH_VARARGS, doc_QRegularExpressionMatchIterator_regularExpression},
    {sipName_swap, meth_QRegularExpressionMatchIterator_swap, METH_VARARGS, doc_QRegularExpressionMatchIterator_swap}
};

PyDoc_STRVAR(doc_QRegularExpressionMatchIterator, "\1QRegularExpressionMatchIterator()\n"
"QRegularExpressionMatchIterator(QRegularExpressionMatchIterator)");


static pyqt5ClassPluginDef plugin_QRegularExpressionMatchIterator = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QRegularExpressionMatchIterator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpressionMatchIterator,
        SIP_NULLPTR,
        &plugin_QRegularExpressionMatchIterator
    },
    {
        sipNameNr_QRegularExpressionMatchIterator,
        {0, 0, 1},
        8, methods_QRegularExpressionMatchIterator,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QRegularExpressionMatchIterator,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QRegularExpressionMatchIterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QRegularExpressionMatchIterator,
    assign_QRegularExpressionMatchIterator,
    array_QRegularExpressionMatchIterator,
    copy_QRegularExpressionMatchIterator,
    release_QRegularExpressionMatchIterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
