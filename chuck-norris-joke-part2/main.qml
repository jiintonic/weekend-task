import QtQuick 2.10
import QtQuick.Window 2.10
import com.mbrdna.joke 1.0

Window {
    visible: true
    width: 640
    height: 480
    opacity: 0.8
    title: qsTr("Chuck Norris Joke Generator")

    Background {
        id: background
        anchors.fill: parent

        JokeRequest{
            id:jokeRequest
            onServerResponse:{
                display.text = response;
            }
        }

        SubmitButton {
            id: submitButton1
            x: 145
            y: 306
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    jokeRequest.makeHoundifyRequest(textEdit.text);
                }
            }
        }

        TextEdit {
            id: textEdit
            x: 78
            y: 31
            width: 484
            height: 41
            text: qsTr("Ask SoundHound a Question")
            font.capitalization: Font.Capitalize
            font.bold: true
            font.family: "Tahoma"
            renderType: Text.NativeRendering
            selectionColor: "#800000"
            textFormat: Text.AutoText
            opacity: 1
            font.pixelSize: 20
        }

        Text {
            id: display
            x: 91
            y: 18
            width: 484
            height: 271
            color: "#ffffff"
            text: qsTr("Welcome to Chuck Norris Joke Generator")
            anchors.verticalCenterOffset: 67
            anchors.horizontalCenterOffset: 0
            wrapMode: Text.WrapAtWordBoundaryOrAnywhere
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            horizontalAlignment: Text.AlignHCenter
            fontSizeMode: Text.FixedSize
            font.bold: true
            font.pixelSize: 20
        }
    }
}
