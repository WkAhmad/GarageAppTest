package com.test.garageappa;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;

public class UnityHolderActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_unity_holder);

        Intent intent = new Intent(UnityHolderActivity.this, UnityPlayerActivity.class);
        intent.putExtra("placeId", 1);
        startActivity(intent);
    }
}