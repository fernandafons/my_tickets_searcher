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

#include "sipAPIQtXml.h"

#line 252 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlEntityResolver.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlEntityResolver.cpp"
#line 82 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlEntityResolver.cpp"


class sipQXmlEntityResolver : public  ::QXmlEntityResolver
{
public:
    sipQXmlEntityResolver();
    sipQXmlEntityResolver(const  ::QXmlEntityResolver&);
    virtual ~sipQXmlEntityResolver();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString errorString() const SIP_OVERRIDE;
    bool resolveEntity(const  ::QString&,const  ::QString&, ::QXmlInputSource*&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlEntityResolver(const sipQXmlEntityResolver &);
    sipQXmlEntityResolver &operator = (const sipQXmlEntityResolver &);

    char sipPyMethods[2];
};

sipQXmlEntityResolver::sipQXmlEntityResolver():  ::QXmlEntityResolver(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlEntityResolver::sipQXmlEntityResolver(const  ::QXmlEntityResolver& a0):  ::QXmlEntityResolver(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlEntityResolver::~sipQXmlEntityResolver()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQXmlEntityResolver::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QXmlEntityResolver, sipName_errorString);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), sipPySelf, sipName_QXmlEntityResolver, sipName_errorString);
#endif

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtXml_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_3(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQXmlEntityResolver::resolveEntity(const  ::QString& a0,const  ::QString& a1, ::QXmlInputSource*&a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[1], &sipPySelf, sipName_QXmlEntityResolver, sipName_resolveEntity);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], sipPySelf, sipName_QXmlEntityResolver, sipName_resolveEntity);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,const  ::QString&, ::QXmlInputSource*&);

    return sipVH_QtXml_34(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QXmlEntityResolver_resolveEntity, "resolveEntity(self, str, str) -> Tuple[bool, QXmlInputSource]");

extern "C" {static PyObject *meth_QXmlEntityResolver_resolveEntity(PyObject *, PyObject *);}
static PyObject *meth_QXmlEntityResolver_resolveEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QXmlInputSource* a2;
         ::QXmlEntityResolver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlEntityResolver, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlEntityResolver, sipName_resolveEntity);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->resolveEntity(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipBuildResult(0,"(bD)",sipRes,a2,sipType_QXmlInputSource,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlEntityResolver, sipName_resolveEntity, doc_QXmlEntityResolver_resolveEntity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlEntityResolver_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QXmlEntityResolver_errorString(PyObject *, PyObject *);}
static PyObject *meth_QXmlEntityResolver_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlEntityResolver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlEntityResolver, &sipCpp))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlEntityResolver, sipName_errorString);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlEntityResolver, sipName_errorString, doc_QXmlEntityResolver_errorString);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlEntityResolver(void *, int);}
static void release_QXmlEntityResolver(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlEntityResolver *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlEntityResolver *>(sipCppV);
}


extern "C" {static void dealloc_QXmlEntityResolver(sipSimpleWrapper *);}
static void dealloc_QXmlEntityResolver(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlEntityResolver *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlEntityResolver(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlEntityResolver(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlEntityResolver(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlEntityResolver *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQXmlEntityResolver();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QXmlEntityResolver* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QXmlEntityResolver, &a0))
        {
            sipCpp = new sipQXmlEntityResolver(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QXmlEntityResolver[] = {
    {sipName_errorString, meth_QXmlEntityResolver_errorString, METH_VARARGS, doc_QXmlEntityResolver_errorString},
    {sipName_resolveEntity, meth_QXmlEntityResolver_resolveEntity, METH_VARARGS, doc_QXmlEntityResolver_resolveEntity}
};

PyDoc_STRVAR(doc_QXmlEntityResolver, "\1QXmlEntityResolver()\n"
"QXmlEntityResolver(QXmlEntityResolver)");


static pyqt5ClassPluginDef plugin_QXmlEntityResolver = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtXml_QXmlEntityResolver = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlEntityResolver,
        SIP_NULLPTR,
        &plugin_QXmlEntityResolver
    },
    {
        sipNameNr_QXmlEntityResolver,
        {0, 0, 1},
        2, methods_QXmlEntityResolver,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QXmlEntityResolver,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QXmlEntityResolver,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QXmlEntityResolver,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QXmlEntityResolver,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};