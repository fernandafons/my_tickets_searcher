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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qabstractnativeeventfilter.sip"
#include <qabstractnativeeventfilter.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQAbstractNativeEventFilter.cpp"

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQAbstractNativeEventFilter.cpp"


class sipQAbstractNativeEventFilter : public  ::QAbstractNativeEventFilter
{
public:
    sipQAbstractNativeEventFilter();
    virtual ~sipQAbstractNativeEventFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool nativeEventFilter(const  ::QByteArray&,void*,long*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractNativeEventFilter(const sipQAbstractNativeEventFilter &);
    sipQAbstractNativeEventFilter &operator = (const sipQAbstractNativeEventFilter &);

    char sipPyMethods[1];
};

sipQAbstractNativeEventFilter::sipQAbstractNativeEventFilter():  ::QAbstractNativeEventFilter(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractNativeEventFilter::~sipQAbstractNativeEventFilter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipQAbstractNativeEventFilter::nativeEventFilter(const  ::QByteArray& a0,void*a1,long*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[0], &sipPySelf, sipName_QAbstractNativeEventFilter, sipName_nativeEventFilter);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], sipPySelf, sipName_QAbstractNativeEventFilter, sipName_nativeEventFilter);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtCore_41(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QByteArray&,void*,long*);

    return sipVH_QtCore_41(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QAbstractNativeEventFilter_nativeEventFilter, "nativeEventFilter(self, Union[QByteArray, bytes, bytearray], sip.voidptr) -> Tuple[bool, int]");

extern "C" {static PyObject *meth_QAbstractNativeEventFilter_nativeEventFilter(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNativeEventFilter_nativeEventFilter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        void* a1;
        long a2;
         ::QAbstractNativeEventFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1v", &sipSelf, sipType_QAbstractNativeEventFilter, &sipCpp, sipType_QByteArray, &a0, &a0State, &a1))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNativeEventFilter, sipName_nativeEventFilter);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->nativeEventFilter(*a0,a1,&a2);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipBuildResult(0,"(bl)",sipRes,a2);
        }
    }

    sipNoMethod(sipParseErr, sipName_QAbstractNativeEventFilter, sipName_nativeEventFilter, doc_QAbstractNativeEventFilter_nativeEventFilter);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractNativeEventFilter(void *, int);}
static void release_QAbstractNativeEventFilter(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractNativeEventFilter *>(sipCppV);
    else
        delete reinterpret_cast< ::QAbstractNativeEventFilter *>(sipCppV);
}


extern "C" {static void dealloc_QAbstractNativeEventFilter(sipSimpleWrapper *);}
static void dealloc_QAbstractNativeEventFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQAbstractNativeEventFilter *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractNativeEventFilter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QAbstractNativeEventFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractNativeEventFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractNativeEventFilter *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQAbstractNativeEventFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QAbstractNativeEventFilter[] = {
    {sipName_nativeEventFilter, meth_QAbstractNativeEventFilter_nativeEventFilter, METH_VARARGS, doc_QAbstractNativeEventFilter_nativeEventFilter}
};

PyDoc_STRVAR(doc_QAbstractNativeEventFilter, "\1QAbstractNativeEventFilter()");


static pyqt5ClassPluginDef plugin_QAbstractNativeEventFilter = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QAbstractNativeEventFilter = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QAbstractNativeEventFilter,
        SIP_NULLPTR,
        &plugin_QAbstractNativeEventFilter
    },
    {
        sipNameNr_QAbstractNativeEventFilter,
        {0, 0, 1},
        1, methods_QAbstractNativeEventFilter,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QAbstractNativeEventFilter,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QAbstractNativeEventFilter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QAbstractNativeEventFilter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QAbstractNativeEventFilter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
