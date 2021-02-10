package com.icandothisallday2021.testjni;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("jniMain");
    }
    public native String getJNIString();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Toast.makeText(this, "" + getJNIString(), Toast.LENGTH_SHORT).show();
    }
}