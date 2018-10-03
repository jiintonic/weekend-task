import QtQuick 2.4

Item {
    id: item1
    width: 100
    height: 50

    Rectangle {
        id: button
        x: 25
        y: 184
        width: 100
        height: 50
        color: "#8af61d"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        Text {
            id: display
            text: "Record"
            verticalAlignment: Text.AlignVCenter
            anchors.fill: parent
            horizontalAlignment: Text.AlignHCenter
            font.bold: true
            lineHeight: 0
            elide: Text.ElideMiddle
            font.pixelSize: 24
        }
    }
}
