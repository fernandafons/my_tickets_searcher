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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qfileiconprovider.sip"
#include <qfileiconprovider.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQFileIconProvider.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qfileiconprovider.sip"
#include <qfileiconprovider.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQFileIconProvider.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQFileIconProvider.cpp"
#line 26 "sip/QtCore/qfileinfo.sip"
#include <qfileinfo.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQFileIconProvider.cpp"
#line 26 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQFileIconProvider.cpp"


class sipQFileIconProvider : public  ::QFileIconProvider
{
public:
    sipQFileIconProvider();
    virtual ~sipQFileIconProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString type(const  ::QFileInfo&) const SIP_OVERRIDE;
     ::QIcon icon(const  ::QFileInfo&) const SIP_OVERRIDE;
     ::QIcon icon( ::QFileIconProvider::IconType) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQFileIconProvider(const sipQFileIconProvider &);
    sipQFileIconProvider &operator = (const sipQFileIconProvider &);

    char sipPyMethods[3];
};

sipQFileIconProvider::sipQFileIconProvider():  ::QFileIconProvider(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFileIconProvider::~sipQFileIconProvider()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQFileIconProvider::type(const  ::QFileInfo& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_type);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), sipPySelf, SIP_NULLPTR, sipName_type);
#endif

    if (!sipMeth)
        return  ::QFileIconProvider::type(a0);

    extern  ::QString sipVH_QtWidgets_134(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QFileInfo&);

    return sipVH_QtWidgets_134(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QIcon sipQFileIconProvider::icon(const  ::QFileInfo& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_icon);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), sipPySelf, SIP_NULLPTR, sipName_icon);
#endif

    if (!sipMeth)
        return  ::QFileIconProvider::icon(a0);

    extern  ::QIcon sipVH_QtWidgets_133(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QFileInfo&);

    return sipVH_QtWidgets_133(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QIcon sipQFileIconProvider::icon( ::QFileIconProvider::IconType a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_icon);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), sipPySelf, SIP_NULLPTR, sipName_icon);
#endif

    if (!sipMeth)
        return  ::QFileIconProvider::icon(a0);

    extern  ::QIcon sipVH_QtWidgets_132(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QFileIconProvider::IconType);

    return sipVH_QtWidgets_132(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QFileIconProvider_icon, "icon(self, QFileIconProvider.IconType) -> QIcon\n"
"icon(self, QFileInfo) -> QIcon");

extern "C" {static PyObject *meth_QFileIconProvider_icon(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QFileIconProvider::IconType a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileIconProvider_IconType, &a0))
        {
             ::QIcon*sipRes;

            sipRes = new  ::QIcon((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::icon(a0) : sipCpp->icon(a0)));

            return sipConvertFromNewType(sipRes,sipType_QIcon,SIP_NULLPTR);
        }
    }

    {
        const  ::QFileInfo* a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileInfo, &a0))
        {
             ::QIcon*sipRes;

            sipRes = new  ::QIcon((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::icon(*a0) : sipCpp->icon(*a0)));

            return sipConvertFromNewType(sipRes,sipType_QIcon,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_icon, doc_QFileIconProvider_icon);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QFileIconProvider_type, "type(self, QFileInfo) -> str");

extern "C" {static PyObject *meth_QFileIconProvider_type(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileInfo* a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileInfo, &a0))
        {
             ::QString*sipRes;

            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::type(*a0) : sipCpp->type(*a0)));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_type, doc_QFileIconProvider_type);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QFileIconProvider_setOptions, "setOptions(self, Union[QFileIconProvider.Options, QFileIconProvider.Option])");

extern "C" {static PyObject *meth_QFileIconProvider_setOptions(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_setOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QFileIconProvider::Options* a0;
        int a0State = 0;
         ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileIconProvider_Options, &a0, &a0State))
        {
            sipCpp->setOptions(*a0);
            sipReleaseType(a0,sipType_QFileIconProvider_Options,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_setOptions, doc_QFileIconProvider_setOptions);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QFileIconProvider_options, "options(self) -> QFileIconProvider.Options");

extern "C" {static PyObject *meth_QFileIconProvider_options(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_options(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileIconProvider, &sipCpp))
        {
             ::QFileIconProvider::Options*sipRes;

            sipRes = new  ::QFileIconProvider::Options(sipCpp->options());

            return sipConvertFromNewType(sipRes,sipType_QFileIconProvider_Options,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_options, doc_QFileIconProvider_options);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileIconProvider(void *, int);}
static void release_QFileIconProvider(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQFileIconProvider *>(sipCppV);
    else
        delete reinterpret_cast< ::QFileIconProvider *>(sipCppV);
}


extern "C" {static void *array_QFileIconProvider(Py_ssize_t);}
static void *array_QFileIconProvider(Py_ssize_t sipNrElem)
{
    return new  ::QFileIconProvider[sipNrElem];
}


extern "C" {static void dealloc_QFileIconProvider(sipSimpleWrapper *);}
static void dealloc_QFileIconProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQFileIconProvider *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFileIconProvider(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QFileIconProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileIconProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQFileIconProvider *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQFileIconProvider();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QFileIconProvider[] = {
    {sipName_icon, meth_QFileIconProvider_icon, METH_VARARGS, doc_QFileIconProvider_icon},
    {sipName_options, meth_QFileIconProvider_options, METH_VARARGS, doc_QFileIconProvider_options},
    {sipName_setOptions, meth_QFileIconProvider_setOptions, METH_VARARGS, doc_QFileIconProvider_setOptions},
    {sipName_type, meth_QFileIconProvider_type, METH_VARARGS, doc_QFileIconProvider_type}
};

static sipEnumMemberDef enummembers_QFileIconProvider[] = {
    {sipName_Computer, static_cast<int>( ::QFileIconProvider::Computer), 83},
    {sipName_Desktop, static_cast<int>( ::QFileIconProvider::Desktop), 83},
    {sipName_DontUseCustomDirectoryIcons, static_cast<int>( ::QFileIconProvider::DontUseCustomDirectoryIcons), 84},
    {sipName_Drive, static_cast<int>( ::QFileIconProvider::Drive), 83},
    {sipName_File, static_cast<int>( ::QFileIconProvider::File), 83},
    {sipName_Folder, static_cast<int>( ::QFileIconProvider::Folder), 83},
    {sipName_Network, static_cast<int>( ::QFileIconProvider::Network), 83},
    {sipName_Trashcan, static_cast<int>( ::QFileIconProvider::Trashcan), 83},
};

PyDoc_STRVAR(doc_QFileIconProvider, "\1QFileIconProvider()");


static pyqt5ClassPluginDef plugin_QFileIconProvider = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QFileIconProvider = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QFileIconProvider,
        SIP_NULLPTR,
        &plugin_QFileIconProvider
    },
    {
        sipNameNr_QFileIconProvider,
        {0, 0, 1},
        4, methods_QFileIconProvider,
        8, enummembers_QFileIconProvider,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QFileIconProvider,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QFileIconProvider,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QFileIconProvider,
    SIP_NULLPTR,
    array_QFileIconProvider,
    SIP_NULLPTR,
    release_QFileIconProvider,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
