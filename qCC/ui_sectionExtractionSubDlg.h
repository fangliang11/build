/********************************************************************************
** Form generated from reading UI file 'sectionExtractionSubDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONEXTRACTIONSUBDLG_H
#define UI_SECTIONEXTRACTIONSUBDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SectionExtractionSubDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *activeSectionsLabel;
    QLabel *label;
    QDoubleSpinBox *thicknessDoubleSpinBox;
    QGroupBox *extractCloudsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QGroupBox *extractEnvelopesGroupBox;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *envelopeTypeComboBox;
    QLabel *label_2;
    QDoubleSpinBox *maxEdgeLengthDoubleSpinBox;
    QCheckBox *multiPassCheckBox;
    QCheckBox *splitEnvelopeCheckBox;
    QCheckBox *debugModeCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SectionExtractionSubDlg)
    {
        if (SectionExtractionSubDlg->objectName().isEmpty())
            SectionExtractionSubDlg->setObjectName(QString::fromUtf8("SectionExtractionSubDlg"));
        SectionExtractionSubDlg->resize(329, 392);
        verticalLayout = new QVBoxLayout(SectionExtractionSubDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(SectionExtractionSubDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        formLayout_2 = new QFormLayout(frame);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        activeSectionsLabel = new QLabel(frame);
        activeSectionsLabel->setObjectName(QString::fromUtf8("activeSectionsLabel"));
        activeSectionsLabel->setText(QString::fromUtf8("0"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, activeSectionsLabel);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        thicknessDoubleSpinBox = new QDoubleSpinBox(frame);
        thicknessDoubleSpinBox->setObjectName(QString::fromUtf8("thicknessDoubleSpinBox"));
        thicknessDoubleSpinBox->setDecimals(6);
        thicknessDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, thicknessDoubleSpinBox);


        verticalLayout->addWidget(frame);

        extractCloudsGroupBox = new QGroupBox(SectionExtractionSubDlg);
        extractCloudsGroupBox->setObjectName(QString::fromUtf8("extractCloudsGroupBox"));
        extractCloudsGroupBox->setCheckable(true);
        extractCloudsGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(extractCloudsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(extractCloudsGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        verticalLayout->addWidget(extractCloudsGroupBox);

        extractEnvelopesGroupBox = new QGroupBox(SectionExtractionSubDlg);
        extractEnvelopesGroupBox->setObjectName(QString::fromUtf8("extractEnvelopesGroupBox"));
        extractEnvelopesGroupBox->setCheckable(true);
        extractEnvelopesGroupBox->setChecked(true);
        verticalLayout_3 = new QVBoxLayout(extractEnvelopesGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(extractEnvelopesGroupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 50));
        formLayout = new QFormLayout(frame_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        envelopeTypeComboBox = new QComboBox(frame_2);
        envelopeTypeComboBox->addItem(QString());
        envelopeTypeComboBox->addItem(QString());
        envelopeTypeComboBox->addItem(QString());
        envelopeTypeComboBox->setObjectName(QString::fromUtf8("envelopeTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, envelopeTypeComboBox);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        maxEdgeLengthDoubleSpinBox = new QDoubleSpinBox(frame_2);
        maxEdgeLengthDoubleSpinBox->setObjectName(QString::fromUtf8("maxEdgeLengthDoubleSpinBox"));
        maxEdgeLengthDoubleSpinBox->setDecimals(6);
        maxEdgeLengthDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxEdgeLengthDoubleSpinBox);


        verticalLayout_3->addWidget(frame_2);

        multiPassCheckBox = new QCheckBox(extractEnvelopesGroupBox);
        multiPassCheckBox->setObjectName(QString::fromUtf8("multiPassCheckBox"));

        verticalLayout_3->addWidget(multiPassCheckBox);

        splitEnvelopeCheckBox = new QCheckBox(extractEnvelopesGroupBox);
        splitEnvelopeCheckBox->setObjectName(QString::fromUtf8("splitEnvelopeCheckBox"));

        verticalLayout_3->addWidget(splitEnvelopeCheckBox);

        debugModeCheckBox = new QCheckBox(extractEnvelopesGroupBox);
        debugModeCheckBox->setObjectName(QString::fromUtf8("debugModeCheckBox"));

        verticalLayout_3->addWidget(debugModeCheckBox);


        verticalLayout->addWidget(extractEnvelopesGroupBox);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SectionExtractionSubDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SectionExtractionSubDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SectionExtractionSubDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SectionExtractionSubDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(SectionExtractionSubDlg);
    } // setupUi

    void retranslateUi(QDialog *SectionExtractionSubDlg)
    {
        SectionExtractionSubDlg->setWindowTitle(QCoreApplication::translate("SectionExtractionSubDlg", "Extract Sections", nullptr));
        label_5->setText(QCoreApplication::translate("SectionExtractionSubDlg", "Active section(s)", nullptr));
        label->setText(QCoreApplication::translate("SectionExtractionSubDlg", "Sections thickness", nullptr));
#if QT_CONFIG(tooltip)
        thicknessDoubleSpinBox->setToolTip(QCoreApplication::translate("SectionExtractionSubDlg", "Thickness of each section (depends on the cloud density)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        extractCloudsGroupBox->setToolTip(QCoreApplication::translate("SectionExtractionSubDlg", "To extract each section as a point cloud", nullptr));
#endif // QT_CONFIG(tooltip)
        extractCloudsGroupBox->setTitle(QCoreApplication::translate("SectionExtractionSubDlg", "Extract section cloud(s)", nullptr));
        label_4->setText(QCoreApplication::translate("SectionExtractionSubDlg", "No parameter", nullptr));
#if QT_CONFIG(tooltip)
        extractEnvelopesGroupBox->setToolTip(QCoreApplication::translate("SectionExtractionSubDlg", "To extract the contour of each section as a polyline", nullptr));
#endif // QT_CONFIG(tooltip)
        extractEnvelopesGroupBox->setTitle(QCoreApplication::translate("SectionExtractionSubDlg", "Extract section profile(s)", nullptr));
        label_3->setText(QCoreApplication::translate("SectionExtractionSubDlg", "type", nullptr));
        envelopeTypeComboBox->setItemText(0, QCoreApplication::translate("SectionExtractionSubDlg", "Lower", nullptr));
        envelopeTypeComboBox->setItemText(1, QCoreApplication::translate("SectionExtractionSubDlg", "Upper", nullptr));
        envelopeTypeComboBox->setItemText(2, QCoreApplication::translate("SectionExtractionSubDlg", "Both", nullptr));

#if QT_CONFIG(tooltip)
        envelopeTypeComboBox->setToolTip(QCoreApplication::translate("SectionExtractionSubDlg", "Section type (lower or upper part, or both)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("SectionExtractionSubDlg", "max edge length", nullptr));
#if QT_CONFIG(tooltip)
        maxEdgeLengthDoubleSpinBox->setToolTip(QCoreApplication::translate("SectionExtractionSubDlg", "Max output polyline edge length (the smaller, the closer to the points the contour will be).\n"
"Warning: if 0, generates the convex hull.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        multiPassCheckBox->setToolTip(QCoreApplication::translate("SectionExtractionSubDlg", "Multi-pass process where longer edges may be temporarily created to obtain a better fit... or a worst one ;)", nullptr));
#endif // QT_CONFIG(tooltip)
        multiPassCheckBox->setText(QCoreApplication::translate("SectionExtractionSubDlg", "multi-pass", nullptr));
#if QT_CONFIG(tooltip)
        splitEnvelopeCheckBox->setToolTip(QCoreApplication::translate("SectionExtractionSubDlg", "split the generated profile(s) in smaller parts to avoid creating too long edges (10 times the specified max edge length).\n"
"Warning: may not be compatible with Mascaret export.", nullptr));
#endif // QT_CONFIG(tooltip)
        splitEnvelopeCheckBox->setText(QCoreApplication::translate("SectionExtractionSubDlg", "split profile on longer edges", nullptr));
#if QT_CONFIG(tooltip)
        debugModeCheckBox->setToolTip(QCoreApplication::translate("SectionExtractionSubDlg", "Display a dialog with step-by-step execution of the algorithm (debug mode - very slow)", nullptr));
#endif // QT_CONFIG(tooltip)
        debugModeCheckBox->setText(QCoreApplication::translate("SectionExtractionSubDlg", "visual debug mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SectionExtractionSubDlg: public Ui_SectionExtractionSubDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONEXTRACTIONSUBDLG_H
