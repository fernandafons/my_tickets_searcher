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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstylefactory.sip"
#include <qstylefactory.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleFactory.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyle.sip"
#include <qstyle.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleFactory.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleFactory.cpp"
#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleFactory.cpp"


PyDoc_STRVAR(doc_QStyleFactory_keys, "keys() -> List[str]");

extern "C" {static PyObject *meth_QStyleFactory_keys(PyObject *, PyObject *);}
static PyObject *meth_QStyleFactory_keys(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList( ::QStyleFactory::keys());

            return sipConvertFromNewType(sipRes,sipType_QStringList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QStyleFactory, sipName_keys, doc_QStyleFactory_keys);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QStyleFactory_create, "create(str) -> QStyle");

extern "C" {static PyObject *meth_QStyleFactory_create(PyObject *, PyObject *);}
static PyObject *meth_QStyleFactory_create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
             ::QStyle*sipRes;

            sipRes =  ::QStyleFactory::create(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QStyleFactory, sipName_create, doc_QStyleFactory_create);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleFactory(void *, int);}
static void release_QStyleFactory(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleFactory *>(sipCppV);
}


extern "C" {static void *array_QStyleFactory(Py_ssize_t);}
static void *array_QStyleFactory(Py_ssize_t sipNrElem)
{
    return new  ::QStyleFactory[sipNrElem];
}


extern "C" {static void assign_QStyleFactory(void *, Py_ssize_t, void *);}
static void assign_QStyleFactory(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleFactory *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleFactory *>(sipSrc);
}


extern "C" {static void *copy_QStyleFactory(const void *, Py_ssize_t);}
static void *copy_QStyleFactory(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleFactory(reinterpret_cast<const  ::QStyleFactory *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleFactory(sipSimpleWrapper *);}
static void dealloc_QStyleFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleFactory(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleFactory(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleFactory *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyleFactory();

            return sipCpp;
        }
    }

    {
        const  ::QStyleFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleFactory, &a0))
        {
            sipCpp = new  ::QStyleFactory(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QStyleFactory[] = {
    {sipName_create, meth_QStyleFactory_create, METH_VARARGS, doc_QStyleFactory_create},
    {sipName_keys, meth_QStyleFactory_keys, METH_VARARGS, doc_QStyleFactory_keys}
};

PyDoc_STRVAR(doc_QStyleFactory, "\1QStyleFactory()\n"
"QStyleFactory(QStyleFactory)");


static pyqt5ClassPluginDef plugin_QStyleFactory = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleFactory = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleFactory,
        SIP_NULLPTR,
        &plugin_QStyleFactory
    },
    {
        sipNameNr_QStyleFactory,
        {0, 0, 1},
        2, methods_QStyleFactory,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleFactory,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QStyleFactory,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleFactory,
    assign_QStyleFactory,
    array_QStyleFactory,
    copy_QStyleFactory,
    release_QStyleFactory,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
