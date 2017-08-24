package cn.eagleview.ljr.ndkdemo;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Log.e("so文件中的内容：", getStrFromJNI());

//        String result = new JNI().sayHello();
//        Log.e("hello---------", result);
    }

    public native String getStrFromJNI();

    static {
        System.loadLibrary("demo");
//        System.loadLibrary("Hello");
    }
}
