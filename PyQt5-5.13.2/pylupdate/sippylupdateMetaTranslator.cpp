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

#include "sipAPIpylupdate.h"

#line 70 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/pylupdate/pylupdatemod.sip"
#include "pylupdate.h"
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/pylupdate/sippylupdateMetaTranslator.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/pylupdate/sippylupdateMetaTranslator.cpp"


extern "C" {static PyObject *meth_MetaTranslator_load(PyObject *, PyObject *);}
static PyObject *meth_MetaTranslator_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::MetaTranslator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_MetaTranslator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->load(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_MetaTranslator, sipName_load, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_MetaTranslator_save(PyObject *, PyObject *);}
static PyObject *meth_MetaTranslator_save(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::MetaTranslator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_MetaTranslator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->save(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_MetaTranslator, sipName_save, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_MetaTranslator_stripObsoleteMessages(PyObject *, PyObject *);}
static PyObject *meth_MetaTranslator_stripObsoleteMessages(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::MetaTranslator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MetaTranslator, &sipCpp))
        {
            sipCpp->stripObsoleteMessages();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_MetaTranslator, sipName_stripObsoleteMessages, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_MetaTranslator_stripEmptyContexts(PyObject *, PyObject *);}
static PyObject *meth_MetaTranslator_stripEmptyContexts(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::MetaTranslator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MetaTranslator, &sipCpp))
        {
            sipCpp->stripEmptyContexts();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_MetaTranslator, sipName_stripEmptyContexts, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_MetaTranslator_setCodec(PyObject *, PyObject *);}
static PyObject *meth_MetaTranslator_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const char* a0;
        PyObject *a0Keep;
         ::MetaTranslator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAL", &sipSelf, sipType_MetaTranslator, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->setCodec(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_MetaTranslator, sipName_setCodec, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_MetaTranslator(void *, int);}
static void release_MetaTranslator(void *sipCppV, int)
{
    delete reinterpret_cast< ::MetaTranslator *>(sipCppV);
}


extern "C" {static void *array_MetaTranslator(Py_ssize_t);}
static void *array_MetaTranslator(Py_ssize_t sipNrElem)
{
    return new  ::MetaTranslator[sipNrElem];
}


extern "C" {static void assign_MetaTranslator(void *, Py_ssize_t, void *);}
static void assign_MetaTranslator(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::MetaTranslator *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::MetaTranslator *>(sipSrc);
}


extern "C" {static void *copy_MetaTranslator(const void *, Py_ssize_t);}
static void *copy_MetaTranslator(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::MetaTranslator(reinterpret_cast<const  ::MetaTranslator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_MetaTranslator(sipSimpleWrapper *);}
static void dealloc_MetaTranslator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_MetaTranslator(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_MetaTranslator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_MetaTranslator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::MetaTranslator *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::MetaTranslator();

            return sipCpp;
        }
    }

    {
        const  ::MetaTranslator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_MetaTranslator, &a0))
        {
            sipCpp = new  ::MetaTranslator(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_MetaTranslator[] = {
    {sipName_load, meth_MetaTranslator_load, METH_VARARGS, SIP_NULLPTR},
    {sipName_save, meth_MetaTranslator_save, METH_VARARGS, SIP_NULLPTR},
    {sipName_setCodec, meth_MetaTranslator_setCodec, METH_VARARGS, SIP_NULLPTR},
    {sipName_stripEmptyContexts, meth_MetaTranslator_stripEmptyContexts, METH_VARARGS, SIP_NULLPTR},
    {sipName_stripObsoleteMessages, meth_MetaTranslator_stripObsoleteMessages, METH_VARARGS, SIP_NULLPTR}
};


static pyqt5ClassPluginDef plugin_MetaTranslator = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_pylupdate_MetaTranslator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_MetaTranslator,
        SIP_NULLPTR,
        &plugin_MetaTranslator
    },
    {
        sipNameNr_MetaTranslator,
        {0, 0, 1},
        5, methods_MetaTranslator,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_MetaTranslator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_MetaTranslator,
    assign_MetaTranslator,
    array_MetaTranslator,
    copy_MetaTranslator,
    release_MetaTranslator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
