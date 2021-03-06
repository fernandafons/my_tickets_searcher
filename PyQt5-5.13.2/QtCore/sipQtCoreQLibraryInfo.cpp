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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qlibraryinfo.sip"
#include <qlibraryinfo.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQLibraryInfo.cpp"

#line 34 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qversionnumber.sip"
#include <qversionnumber.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQLibraryInfo.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQLibraryInfo.cpp"
#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQLibraryInfo.cpp"


PyDoc_STRVAR(doc_QLibraryInfo_licensee, "licensee() -> str");

extern "C" {static PyObject *meth_QLibraryInfo_licensee(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_licensee(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QLibraryInfo::licensee());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_licensee, doc_QLibraryInfo_licensee);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLibraryInfo_licensedProducts, "licensedProducts() -> str");

extern "C" {static PyObject *meth_QLibraryInfo_licensedProducts(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_licensedProducts(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QLibraryInfo::licensedProducts());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_licensedProducts, doc_QLibraryInfo_licensedProducts);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLibraryInfo_location, "location(QLibraryInfo.LibraryLocation) -> str");

extern "C" {static PyObject *meth_QLibraryInfo_location(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_location(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QLibraryInfo::LibraryLocation a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QLibraryInfo_LibraryLocation, &a0))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QLibraryInfo::location(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_location, doc_QLibraryInfo_location);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLibraryInfo_buildDate, "buildDate() -> QDate");

extern "C" {static PyObject *meth_QLibraryInfo_buildDate(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_buildDate(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QDate*sipRes;

            sipRes = new  ::QDate( ::QLibraryInfo::buildDate());

            return sipConvertFromNewType(sipRes,sipType_QDate,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_buildDate, doc_QLibraryInfo_buildDate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLibraryInfo_isDebugBuild, "isDebugBuild() -> bool");

extern "C" {static PyObject *meth_QLibraryInfo_isDebugBuild(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_isDebugBuild(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes =  ::QLibraryInfo::isDebugBuild();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_isDebugBuild, doc_QLibraryInfo_isDebugBuild);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLibraryInfo_version, "version() -> QVersionNumber");

extern "C" {static PyObject *meth_QLibraryInfo_version(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_version(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QVersionNumber*sipRes;

            sipRes = new  ::QVersionNumber( ::QLibraryInfo::version());

            return sipConvertFromNewType(sipRes,sipType_QVersionNumber,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_version, doc_QLibraryInfo_version);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLibraryInfo(void *, int);}
static void release_QLibraryInfo(void *sipCppV, int)
{
    delete reinterpret_cast< ::QLibraryInfo *>(sipCppV);
}


extern "C" {static void assign_QLibraryInfo(void *, Py_ssize_t, void *);}
static void assign_QLibraryInfo(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QLibraryInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QLibraryInfo *>(sipSrc);
}


extern "C" {static void *copy_QLibraryInfo(const void *, Py_ssize_t);}
static void *copy_QLibraryInfo(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QLibraryInfo(reinterpret_cast<const  ::QLibraryInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLibraryInfo(sipSimpleWrapper *);}
static void dealloc_QLibraryInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QLibraryInfo(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QLibraryInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLibraryInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QLibraryInfo *sipCpp = SIP_NULLPTR;

    {
        const  ::QLibraryInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QLibraryInfo, &a0))
        {
            sipCpp = new  ::QLibraryInfo(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QLibraryInfo[] = {
    {sipName_buildDate, meth_QLibraryInfo_buildDate, METH_VARARGS, doc_QLibraryInfo_buildDate},
    {sipName_isDebugBuild, meth_QLibraryInfo_isDebugBuild, METH_VARARGS, doc_QLibraryInfo_isDebugBuild},
    {sipName_licensedProducts, meth_QLibraryInfo_licensedProducts, METH_VARARGS, doc_QLibraryInfo_licensedProducts},
    {sipName_licensee, meth_QLibraryInfo_licensee, METH_VARARGS, doc_QLibraryInfo_licensee},
    {sipName_location, meth_QLibraryInfo_location, METH_VARARGS, doc_QLibraryInfo_location},
    {sipName_version, meth_QLibraryInfo_version, METH_VARARGS, doc_QLibraryInfo_version}
};

static sipEnumMemberDef enummembers_QLibraryInfo[] = {
    {sipName_ArchDataPath, static_cast<int>( ::QLibraryInfo::ArchDataPath), 117},
    {sipName_BinariesPath, static_cast<int>( ::QLibraryInfo::BinariesPath), 117},
    {sipName_DataPath, static_cast<int>( ::QLibraryInfo::DataPath), 117},
    {sipName_DocumentationPath, static_cast<int>( ::QLibraryInfo::DocumentationPath), 117},
    {sipName_ExamplesPath, static_cast<int>( ::QLibraryInfo::ExamplesPath), 117},
    {sipName_HeadersPath, static_cast<int>( ::QLibraryInfo::HeadersPath), 117},
    {sipName_ImportsPath, static_cast<int>( ::QLibraryInfo::ImportsPath), 117},
    {sipName_LibrariesPath, static_cast<int>( ::QLibraryInfo::LibrariesPath), 117},
    {sipName_LibraryExecutablesPath, static_cast<int>( ::QLibraryInfo::LibraryExecutablesPath), 117},
    {sipName_PluginsPath, static_cast<int>( ::QLibraryInfo::PluginsPath), 117},
    {sipName_PrefixPath, static_cast<int>( ::QLibraryInfo::PrefixPath), 117},
    {sipName_Qml2ImportsPath, static_cast<int>( ::QLibraryInfo::Qml2ImportsPath), 117},
    {sipName_SettingsPath, static_cast<int>( ::QLibraryInfo::SettingsPath), 117},
    {sipName_TestsPath, static_cast<int>( ::QLibraryInfo::TestsPath), 117},
    {sipName_TranslationsPath, static_cast<int>( ::QLibraryInfo::TranslationsPath), 117},
};

PyDoc_STRVAR(doc_QLibraryInfo, "\1QLibraryInfo(QLibraryInfo)");


static pyqt5ClassPluginDef plugin_QLibraryInfo = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QLibraryInfo = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QLibraryInfo,
        SIP_NULLPTR,
        &plugin_QLibraryInfo
    },
    {
        sipNameNr_QLibraryInfo,
        {0, 0, 1},
        6, methods_QLibraryInfo,
        15, enummembers_QLibraryInfo,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QLibraryInfo,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QLibraryInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QLibraryInfo,
    assign_QLibraryInfo,
    SIP_NULLPTR,
    copy_QLibraryInfo,
    release_QLibraryInfo,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
