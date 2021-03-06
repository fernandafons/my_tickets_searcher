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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"
#line 71 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qlayout.sip"
#include <qlayout.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 54 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQLayoutItem.cpp"


class sipQLayoutItem : public  ::QLayoutItem
{
public:
    sipQLayoutItem( ::Qt::Alignment);
    sipQLayoutItem(const  ::QLayoutItem&);
    virtual ~sipQLayoutItem();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QSizePolicy::ControlTypes controlTypes() const SIP_OVERRIDE;
     ::QSpacerItem* spacerItem() SIP_OVERRIDE;
     ::QLayout* layout() SIP_OVERRIDE;
     ::QWidget* widget() SIP_OVERRIDE;
    void invalidate() SIP_OVERRIDE;
    int minimumHeightForWidth(int) const SIP_OVERRIDE;
    int heightForWidth(int) const SIP_OVERRIDE;
    bool hasHeightForWidth() const SIP_OVERRIDE;
    bool isEmpty() const SIP_OVERRIDE;
     ::QRect geometry() const SIP_OVERRIDE;
    void setGeometry(const  ::QRect&) SIP_OVERRIDE;
     ::Qt::Orientations expandingDirections() const SIP_OVERRIDE;
     ::QSize maximumSize() const SIP_OVERRIDE;
     ::QSize minimumSize() const SIP_OVERRIDE;
     ::QSize sizeHint() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQLayoutItem(const sipQLayoutItem &);
    sipQLayoutItem &operator = (const sipQLayoutItem &);

    char sipPyMethods[15];
};

sipQLayoutItem::sipQLayoutItem( ::Qt::Alignment a0):  ::QLayoutItem(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLayoutItem::sipQLayoutItem(const  ::QLayoutItem& a0):  ::QLayoutItem(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLayoutItem::~sipQLayoutItem()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QSizePolicy::ControlTypes sipQLayoutItem::controlTypes() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_controlTypes);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), sipPySelf, SIP_NULLPTR, sipName_controlTypes);
#endif

    if (!sipMeth)
        return  ::QLayoutItem::controlTypes();

    extern  ::QSizePolicy::ControlTypes sipVH_QtWidgets_81(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_81(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSpacerItem* sipQLayoutItem::spacerItem()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[1], &sipPySelf, SIP_NULLPTR, sipName_spacerItem);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], sipPySelf, SIP_NULLPTR, sipName_spacerItem);
#endif

    if (!sipMeth)
        return  ::QLayoutItem::spacerItem();

    extern  ::QSpacerItem* sipVH_QtWidgets_80(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_80(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QLayout* sipQLayoutItem::layout()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[2], &sipPySelf, SIP_NULLPTR, sipName_layout);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], sipPySelf, SIP_NULLPTR, sipName_layout);
#endif

    if (!sipMeth)
        return  ::QLayoutItem::layout();

    extern  ::QLayout* sipVH_QtWidgets_79(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_79(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QWidget* sipQLayoutItem::widget()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_widget);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], sipPySelf, SIP_NULLPTR, sipName_widget);
#endif

    if (!sipMeth)
        return  ::QLayoutItem::widget();

    extern  ::QWidget* sipVH_QtWidgets_78(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_78(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQLayoutItem::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[4], &sipPySelf, SIP_NULLPTR, sipName_invalidate);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[4], sipPySelf, SIP_NULLPTR, sipName_invalidate);
#endif

    if (!sipMeth)
    {
         ::QLayoutItem::invalidate();
        return;
    }

    extern void sipVH_QtWidgets_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtWidgets_37(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

int sipQLayoutItem::minimumHeightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[5]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_minimumHeightForWidth);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[5]), sipPySelf, SIP_NULLPTR, sipName_minimumHeightForWidth);
#endif

    if (!sipMeth)
        return  ::QLayoutItem::minimumHeightForWidth(a0);

    extern int sipVH_QtWidgets_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtWidgets_11(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

int sipQLayoutItem::heightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[6]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_heightForWidth);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[6]), sipPySelf, SIP_NULLPTR, sipName_heightForWidth);
#endif

    if (!sipMeth)
        return  ::QLayoutItem::heightForWidth(a0);

    extern int sipVH_QtWidgets_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtWidgets_11(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQLayoutItem::hasHeightForWidth() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[7]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_hasHeightForWidth);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[7]), sipPySelf, SIP_NULLPTR, sipName_hasHeightForWidth);
#endif

    if (!sipMeth)
        return  ::QLayoutItem::hasHeightForWidth();

    extern bool sipVH_QtWidgets_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_32(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQLayoutItem::isEmpty() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[8]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QLayoutItem, sipName_isEmpty);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[8]), sipPySelf, sipName_QLayoutItem, sipName_isEmpty);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtWidgets_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_32(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QRect sipQLayoutItem::geometry() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[9]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QLayoutItem, sipName_geometry);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[9]), sipPySelf, sipName_QLayoutItem, sipName_geometry);
#endif

    if (!sipMeth)
        return  ::QRect();

    extern  ::QRect sipVH_QtWidgets_77(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_77(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQLayoutItem::setGeometry(const  ::QRect& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[10], &sipPySelf, sipName_QLayoutItem, sipName_setGeometry);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[10], sipPySelf, sipName_QLayoutItem, sipName_setGeometry);
#endif

    if (!sipMeth)
        return;

    extern void sipVH_QtWidgets_76(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QRect&);

    sipVH_QtWidgets_76(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::Qt::Orientations sipQLayoutItem::expandingDirections() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[11]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QLayoutItem, sipName_expandingDirections);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[11]), sipPySelf, sipName_QLayoutItem, sipName_expandingDirections);
#endif

    if (!sipMeth)
        return  ::Qt::Orientations();

    extern  ::Qt::Orientations sipVH_QtWidgets_75(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_75(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSize sipQLayoutItem::maximumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[12]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QLayoutItem, sipName_maximumSize);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[12]), sipPySelf, sipName_QLayoutItem, sipName_maximumSize);
#endif

    if (!sipMeth)
        return  ::QSize();

    extern  ::QSize sipVH_QtWidgets_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_10(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSize sipQLayoutItem::minimumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[13]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QLayoutItem, sipName_minimumSize);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[13]), sipPySelf, sipName_QLayoutItem, sipName_minimumSize);
#endif

    if (!sipMeth)
        return  ::QSize();

    extern  ::QSize sipVH_QtWidgets_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_10(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSize sipQLayoutItem::sizeHint() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[14]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QLayoutItem, sipName_sizeHint);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[14]), sipPySelf, sipName_QLayoutItem, sipName_sizeHint);
#endif

    if (!sipMeth)
        return  ::QSize();

    extern  ::QSize sipVH_QtWidgets_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_10(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QLayoutItem_sizeHint, "sizeHint(self) -> QSize");

extern "C" {static PyObject *meth_QLayoutItem_sizeHint(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_sizeHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::QSize*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_sizeHint);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QSize(sipCpp->sizeHint());

            return sipConvertFromNewType(sipRes,sipType_QSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_sizeHint, doc_QLayoutItem_sizeHint);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_minimumSize, "minimumSize(self) -> QSize");

extern "C" {static PyObject *meth_QLayoutItem_minimumSize(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_minimumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::QSize*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_minimumSize);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QSize(sipCpp->minimumSize());

            return sipConvertFromNewType(sipRes,sipType_QSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_minimumSize, doc_QLayoutItem_minimumSize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_maximumSize, "maximumSize(self) -> QSize");

extern "C" {static PyObject *meth_QLayoutItem_maximumSize(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_maximumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::QSize*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_maximumSize);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QSize(sipCpp->maximumSize());

            return sipConvertFromNewType(sipRes,sipType_QSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_maximumSize, doc_QLayoutItem_maximumSize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_expandingDirections, "expandingDirections(self) -> Qt.Orientations");

extern "C" {static PyObject *meth_QLayoutItem_expandingDirections(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_expandingDirections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::Qt::Orientations*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_expandingDirections);
                return SIP_NULLPTR;
            }

            sipRes = new  ::Qt::Orientations(sipCpp->expandingDirections());

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_expandingDirections, doc_QLayoutItem_expandingDirections);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_setGeometry, "setGeometry(self, QRect)");

extern "C" {static PyObject *meth_QLayoutItem_setGeometry(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_setGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QRect* a0;
         ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLayoutItem, &sipCpp, sipType_QRect, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_setGeometry);
                return SIP_NULLPTR;
            }

            sipCpp->setGeometry(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_setGeometry, doc_QLayoutItem_setGeometry);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_geometry, "geometry(self) -> QRect");

extern "C" {static PyObject *meth_QLayoutItem_geometry(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::QRect*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_geometry);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QRect(sipCpp->geometry());

            return sipConvertFromNewType(sipRes,sipType_QRect,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_geometry, doc_QLayoutItem_geometry);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QLayoutItem_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_isEmpty);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_isEmpty, doc_QLayoutItem_isEmpty);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_hasHeightForWidth, "hasHeightForWidth(self) -> bool");

extern "C" {static PyObject *meth_QLayoutItem_hasHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_hasHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QLayoutItem::hasHeightForWidth() : sipCpp->hasHeightForWidth());

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_hasHeightForWidth, doc_QLayoutItem_hasHeightForWidth);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_heightForWidth, "heightForWidth(self, int) -> int");

extern "C" {static PyObject *meth_QLayoutItem_heightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_heightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QLayoutItem, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QLayoutItem::heightForWidth(a0) : sipCpp->heightForWidth(a0));

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_heightForWidth, doc_QLayoutItem_heightForWidth);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_minimumHeightForWidth, "minimumHeightForWidth(self, int) -> int");

extern "C" {static PyObject *meth_QLayoutItem_minimumHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_minimumHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QLayoutItem, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QLayoutItem::minimumHeightForWidth(a0) : sipCpp->minimumHeightForWidth(a0));

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_minimumHeightForWidth, doc_QLayoutItem_minimumHeightForWidth);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_invalidate, "invalidate(self)");

extern "C" {static PyObject *meth_QLayoutItem_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::QLayoutItem::invalidate() : sipCpp->invalidate());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_invalidate, doc_QLayoutItem_invalidate);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_widget, "widget(self) -> QWidget");

extern "C" {static PyObject *meth_QLayoutItem_widget(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::QWidget*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QLayoutItem::widget() : sipCpp->widget());

            return sipConvertFromType(sipRes,sipType_QWidget,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_widget, doc_QLayoutItem_widget);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_layout, "layout(self) -> QLayout");

extern "C" {static PyObject *meth_QLayoutItem_layout(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_layout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::QLayout*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QLayoutItem::layout() : sipCpp->layout());

            return sipConvertFromType(sipRes,sipType_QLayout,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_layout, doc_QLayoutItem_layout);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_spacerItem, "spacerItem(self) -> QSpacerItem");

extern "C" {static PyObject *meth_QLayoutItem_spacerItem(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_spacerItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::QSpacerItem*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QLayoutItem::spacerItem() : sipCpp->spacerItem());

            return sipConvertFromType(sipRes,sipType_QSpacerItem,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_spacerItem, doc_QLayoutItem_spacerItem);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_alignment, "alignment(self) -> Qt.Alignment");

extern "C" {static PyObject *meth_QLayoutItem_alignment(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_alignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::Qt::Alignment*sipRes;

            sipRes = new  ::Qt::Alignment(sipCpp->alignment());

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_alignment, doc_QLayoutItem_alignment);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_setAlignment, "setAlignment(self, Union[Qt.Alignment, Qt.AlignmentFlag])");

extern "C" {static PyObject *meth_QLayoutItem_setAlignment(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_setAlignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::Alignment* a0;
        int a0State = 0;
         ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLayoutItem, &sipCpp, sipType_Qt_Alignment, &a0, &a0State))
        {
            sipCpp->setAlignment(*a0);
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_setAlignment, doc_QLayoutItem_setAlignment);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QLayoutItem_controlTypes, "controlTypes(self) -> QSizePolicy.ControlTypes");

extern "C" {static PyObject *meth_QLayoutItem_controlTypes(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_controlTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
             ::QSizePolicy::ControlTypes*sipRes;

            sipRes = new  ::QSizePolicy::ControlTypes((sipSelfWasArg ? sipCpp-> ::QLayoutItem::controlTypes() : sipCpp->controlTypes()));

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_controlTypes, doc_QLayoutItem_controlTypes);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLayoutItem(void *, int);}
static void release_QLayoutItem(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQLayoutItem *>(sipCppV);
    else
        delete reinterpret_cast< ::QLayoutItem *>(sipCppV);
}


extern "C" {static void dealloc_QLayoutItem(sipSimpleWrapper *);}
static void dealloc_QLayoutItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQLayoutItem *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QLayoutItem(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QLayoutItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLayoutItem(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQLayoutItem *sipCpp = SIP_NULLPTR;

    {
         ::Qt::Alignment a0def = Qt::Alignment();
         ::Qt::Alignment* a0 = &a0def;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_alignment,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_Qt_Alignment, &a0, &a0State))
        {
            sipCpp = new sipQLayoutItem(*a0);
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QLayoutItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QLayoutItem, &a0))
        {
            sipCpp = new sipQLayoutItem(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QLayoutItem[] = {
    {sipName_alignment, meth_QLayoutItem_alignment, METH_VARARGS, doc_QLayoutItem_alignment},
    {sipName_controlTypes, meth_QLayoutItem_controlTypes, METH_VARARGS, doc_QLayoutItem_controlTypes},
    {sipName_expandingDirections, meth_QLayoutItem_expandingDirections, METH_VARARGS, doc_QLayoutItem_expandingDirections},
    {sipName_geometry, meth_QLayoutItem_geometry, METH_VARARGS, doc_QLayoutItem_geometry},
    {sipName_hasHeightForWidth, meth_QLayoutItem_hasHeightForWidth, METH_VARARGS, doc_QLayoutItem_hasHeightForWidth},
    {sipName_heightForWidth, meth_QLayoutItem_heightForWidth, METH_VARARGS, doc_QLayoutItem_heightForWidth},
    {sipName_invalidate, meth_QLayoutItem_invalidate, METH_VARARGS, doc_QLayoutItem_invalidate},
    {sipName_isEmpty, meth_QLayoutItem_isEmpty, METH_VARARGS, doc_QLayoutItem_isEmpty},
    {sipName_layout, meth_QLayoutItem_layout, METH_VARARGS, doc_QLayoutItem_layout},
    {sipName_maximumSize, meth_QLayoutItem_maximumSize, METH_VARARGS, doc_QLayoutItem_maximumSize},
    {sipName_minimumHeightForWidth, meth_QLayoutItem_minimumHeightForWidth, METH_VARARGS, doc_QLayoutItem_minimumHeightForWidth},
    {sipName_minimumSize, meth_QLayoutItem_minimumSize, METH_VARARGS, doc_QLayoutItem_minimumSize},
    {sipName_setAlignment, meth_QLayoutItem_setAlignment, METH_VARARGS, doc_QLayoutItem_setAlignment},
    {sipName_setGeometry, meth_QLayoutItem_setGeometry, METH_VARARGS, doc_QLayoutItem_setGeometry},
    {sipName_sizeHint, meth_QLayoutItem_sizeHint, METH_VARARGS, doc_QLayoutItem_sizeHint},
    {sipName_spacerItem, meth_QLayoutItem_spacerItem, METH_VARARGS, doc_QLayoutItem_spacerItem},
    {sipName_widget, meth_QLayoutItem_widget, METH_VARARGS, doc_QLayoutItem_widget}
};

PyDoc_STRVAR(doc_QLayoutItem, "\1QLayoutItem(alignment: Union[Qt.Alignment, Qt.AlignmentFlag] = Qt.Alignment())\n"
"QLayoutItem(QLayoutItem)");


static pyqt5ClassPluginDef plugin_QLayoutItem = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QLayoutItem = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QLayoutItem,
        SIP_NULLPTR,
        &plugin_QLayoutItem
    },
    {
        sipNameNr_QLayoutItem,
        {0, 0, 1},
        17, methods_QLayoutItem,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QLayoutItem,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QLayoutItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QLayoutItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QLayoutItem,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
