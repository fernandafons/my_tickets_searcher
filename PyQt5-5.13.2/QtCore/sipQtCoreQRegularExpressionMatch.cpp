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

#line 158 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatch.cpp"

#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatch.cpp"
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatch.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatch.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionMatch.cpp"


PyDoc_STRVAR(doc_QRegularExpressionMatch_swap, "swap(self, QRegularExpressionMatch)");

extern "C" {static PyObject *meth_QRegularExpressionMatch_swap(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QRegularExpressionMatch* a0;
         ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QRegularExpressionMatch, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_swap, doc_QRegularExpressionMatch_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_regularExpression, "regularExpression(self) -> QRegularExpression");

extern "C" {static PyObject *meth_QRegularExpressionMatch_regularExpression(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_regularExpression(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
             ::QRegularExpression*sipRes;

            sipRes = new  ::QRegularExpression(sipCpp->regularExpression());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_regularExpression, doc_QRegularExpressionMatch_regularExpression);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_matchType, "matchType(self) -> QRegularExpression.MatchType");

extern "C" {static PyObject *meth_QRegularExpressionMatch_matchType(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_matchType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
             ::QRegularExpression::MatchType sipRes;

            sipRes = sipCpp->matchType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QRegularExpression_MatchType);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_matchType, doc_QRegularExpressionMatch_matchType);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_matchOptions, "matchOptions(self) -> QRegularExpression.MatchOptions");

extern "C" {static PyObject *meth_QRegularExpressionMatch_matchOptions(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_matchOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
             ::QRegularExpression::MatchOptions*sipRes;

            sipRes = new  ::QRegularExpression::MatchOptions(sipCpp->matchOptions());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_MatchOptions,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_matchOptions, doc_QRegularExpressionMatch_matchOptions);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_hasMatch, "hasMatch(self) -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatch_hasMatch(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_hasMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasMatch();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_hasMatch, doc_QRegularExpressionMatch_hasMatch);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_hasPartialMatch, "hasPartialMatch(self) -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatch_hasPartialMatch(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_hasPartialMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasPartialMatch();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_hasPartialMatch, doc_QRegularExpressionMatch_hasPartialMatch);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatch_isValid(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_isValid, doc_QRegularExpressionMatch_isValid);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_lastCapturedIndex, "lastCapturedIndex(self) -> int");

extern "C" {static PyObject *meth_QRegularExpressionMatch_lastCapturedIndex(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_lastCapturedIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->lastCapturedIndex();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_lastCapturedIndex, doc_QRegularExpressionMatch_lastCapturedIndex);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_captured, "captured(self, nth: int = 0) -> str\n"
"captured(self, str) -> str");

extern "C" {static PyObject *meth_QRegularExpressionMatch_captured(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_captured(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = 0;
        const  ::QRegularExpressionMatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, &a0))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->captured(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "BJ1", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->captured(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_captured, doc_QRegularExpressionMatch_captured);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_capturedTexts, "capturedTexts(self) -> List[str]");

extern "C" {static PyObject *meth_QRegularExpressionMatch_capturedTexts(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_capturedTexts(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList(sipCpp->capturedTexts());

            return sipConvertFromNewType(sipRes,sipType_QStringList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_capturedTexts, doc_QRegularExpressionMatch_capturedTexts);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_capturedStart, "capturedStart(self, nth: int = 0) -> int\n"
"capturedStart(self, str) -> int");

extern "C" {static PyObject *meth_QRegularExpressionMatch_capturedStart(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_capturedStart(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = 0;
        const  ::QRegularExpressionMatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->capturedStart(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "BJ1", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->capturedStart(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_capturedStart, doc_QRegularExpressionMatch_capturedStart);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_capturedLength, "capturedLength(self, nth: int = 0) -> int\n"
"capturedLength(self, str) -> int");

extern "C" {static PyObject *meth_QRegularExpressionMatch_capturedLength(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_capturedLength(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = 0;
        const  ::QRegularExpressionMatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->capturedLength(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "BJ1", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->capturedLength(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_capturedLength, doc_QRegularExpressionMatch_capturedLength);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_capturedEnd, "capturedEnd(self, nth: int = 0) -> int\n"
"capturedEnd(self, str) -> int");

extern "C" {static PyObject *meth_QRegularExpressionMatch_capturedEnd(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_capturedEnd(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = 0;
        const  ::QRegularExpressionMatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->capturedEnd(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QRegularExpressionMatch *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, SIP_NULLPTR, "BJ1", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->capturedEnd(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_capturedEnd, doc_QRegularExpressionMatch_capturedEnd);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegularExpressionMatch(void *, int);}
static void release_QRegularExpressionMatch(void *sipCppV, int)
{
    delete reinterpret_cast< ::QRegularExpressionMatch *>(sipCppV);
}


extern "C" {static void *array_QRegularExpressionMatch(Py_ssize_t);}
static void *array_QRegularExpressionMatch(Py_ssize_t sipNrElem)
{
    return new  ::QRegularExpressionMatch[sipNrElem];
}


extern "C" {static void assign_QRegularExpressionMatch(void *, Py_ssize_t, void *);}
static void assign_QRegularExpressionMatch(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QRegularExpressionMatch *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QRegularExpressionMatch *>(sipSrc);
}


extern "C" {static void *copy_QRegularExpressionMatch(const void *, Py_ssize_t);}
static void *copy_QRegularExpressionMatch(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QRegularExpressionMatch(reinterpret_cast<const  ::QRegularExpressionMatch *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegularExpressionMatch(sipSimpleWrapper *);}
static void dealloc_QRegularExpressionMatch(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRegularExpressionMatch(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRegularExpressionMatch(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpressionMatch(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRegularExpressionMatch *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QRegularExpressionMatch();

            return sipCpp;
        }
    }

    {
        const  ::QRegularExpressionMatch* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QRegularExpressionMatch, &a0))
        {
            sipCpp = new  ::QRegularExpressionMatch(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QRegularExpressionMatch[] = {
    {sipName_captured, SIP_MLMETH_CAST(meth_QRegularExpressionMatch_captured), METH_VARARGS|METH_KEYWORDS, doc_QRegularExpressionMatch_captured},
    {sipName_capturedEnd, SIP_MLMETH_CAST(meth_QRegularExpressionMatch_capturedEnd), METH_VARARGS|METH_KEYWORDS, doc_QRegularExpressionMatch_capturedEnd},
    {sipName_capturedLength, SIP_MLMETH_CAST(meth_QRegularExpressionMatch_capturedLength), METH_VARARGS|METH_KEYWORDS, doc_QRegularExpressionMatch_capturedLength},
    {sipName_capturedStart, SIP_MLMETH_CAST(meth_QRegularExpressionMatch_capturedStart), METH_VARARGS|METH_KEYWORDS, doc_QRegularExpressionMatch_capturedStart},
    {sipName_capturedTexts, meth_QRegularExpressionMatch_capturedTexts, METH_VARARGS, doc_QRegularExpressionMatch_capturedTexts},
    {sipName_hasMatch, meth_QRegularExpressionMatch_hasMatch, METH_VARARGS, doc_QRegularExpressionMatch_hasMatch},
    {sipName_hasPartialMatch, meth_QRegularExpressionMatch_hasPartialMatch, METH_VARARGS, doc_QRegularExpressionMatch_hasPartialMatch},
    {sipName_isValid, meth_QRegularExpressionMatch_isValid, METH_VARARGS, doc_QRegularExpressionMatch_isValid},
    {sipName_lastCapturedIndex, meth_QRegularExpressionMatch_lastCapturedIndex, METH_VARARGS, doc_QRegularExpressionMatch_lastCapturedIndex},
    {sipName_matchOptions, meth_QRegularExpressionMatch_matchOptions, METH_VARARGS, doc_QRegularExpressionMatch_matchOptions},
    {sipName_matchType, meth_QRegularExpressionMatch_matchType, METH_VARARGS, doc_QRegularExpressionMatch_matchType},
    {sipName_regularExpression, meth_QRegularExpressionMatch_regularExpression, METH_VARARGS, doc_QRegularExpressionMatch_regularExpression},
    {sipName_swap, meth_QRegularExpressionMatch_swap, METH_VARARGS, doc_QRegularExpressionMatch_swap}
};

PyDoc_STRVAR(doc_QRegularExpressionMatch, "\1QRegularExpressionMatch()\n"
"QRegularExpressionMatch(QRegularExpressionMatch)");


static pyqt5ClassPluginDef plugin_QRegularExpressionMatch = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QRegularExpressionMatch = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpressionMatch,
        SIP_NULLPTR,
        &plugin_QRegularExpressionMatch
    },
    {
        sipNameNr_QRegularExpressionMatch,
        {0, 0, 1},
        13, methods_QRegularExpressionMatch,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QRegularExpressionMatch,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QRegularExpressionMatch,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QRegularExpressionMatch,
    assign_QRegularExpressionMatch,
    array_QRegularExpressionMatch,
    copy_QRegularExpressionMatch,
    release_QRegularExpressionMatch,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
