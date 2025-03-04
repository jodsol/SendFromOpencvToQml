#ifndef OPENCVIMGPROVIDER_H
#define OPENCVIMGPROVIDER_H

#include <QObject>
#include <QImage>
#include <QQuickImageProvider>

class OpencvImgProvider : public QObject, public QQuickImageProvider
{
    Q_OBJECT
public:
    OpencvImgProvider(QObject *parent = nullptr);

    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize) override;

public slots:
    void updateImage(const QImage &image);

signals:
    void imageChanged();

private:
    QImage image;
};

#endif // OPENCVIMGPROVIDER_H
