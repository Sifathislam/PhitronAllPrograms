# Generated by Django 4.2.7 on 2023-12-22 05:13

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('notes', '0003_alter_notemodel_user'),
    ]

    operations = [
        migrations.AddField(
            model_name='notemodel',
            name='is_achive',
            field=models.BooleanField(default=False),
        ),
    ]
